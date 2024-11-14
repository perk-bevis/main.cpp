#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int w[n+1], v[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    
    int dp[m+1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++) {
      
        for (int j = m; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    cout << dp[m] << endl;
    return 0;
}
