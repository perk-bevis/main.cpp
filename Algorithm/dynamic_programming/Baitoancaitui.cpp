
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, S;
    cin >> n >> S;
    int w[n+1],v[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int dp[n+1][S+1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++) {
        for (int j = 1;j<= S ; j++) {
            dp[i][j] = dp[i-1][j];
            if(j >= w[i]){
              dp[i][j] = max(dp[i][j],dp[i -1][j-w[i]]+v[i]);
            }
        }
    }
    cout << dp[n][S] << endl;
    return 0;
}
