#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> dp(m + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        int weight, value;
        cin >> weight >> value;
        
        
        for (int j = m; j >= weight; --j) {
            dp[j] = max(dp[j], dp[j - weight] + value);
        }
    }

    cout << dp[m] << endl; 
    return 0;
}
