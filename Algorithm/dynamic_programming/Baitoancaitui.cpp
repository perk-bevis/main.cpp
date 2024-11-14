#include <iostream>
using namespace std;

struct Item {
    int w, v;
};

int main() {
    int n, b;
    cin >> n >> b;
    vector<Item> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].w >> a[i].v;

    vector<Item> dp(b + 1);
    memset(dp.data(), 0, sizeof(dp[0]) * dp.size());

    dp[0].w = 1;
    for (int i = 0; i < n; i++) {
        for (int j = b; j >= a[i].w; j--) {
            if (dp[j - a[i].w].w) {
                dp[j].w = 1;
                dp[j].v = max(dp[j - a[i].w].v + a[i].v, dp[j].v);
            }
        }
    }

    int ans = 0;
    for (int i = b; i >= 0; i--) {
        if (dp[i].w)
            ans = max(ans, dp[i].v);
    }

    cout << ans;
    return 0;
}
===============
#include <iostream>
#include <cstring>
#include <algorithm>
#define MAX 5000
using namespace std;

struct Item {
    int w, v;
};

Item dp[MAX];
Item a[MAX];

int main() {
    int n, b;
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        cin >> a[i].w;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i].v;
    }

    memset(dp, 0, sizeof(dp));

    dp[0].w = 1; // Khởi tạo trạng thái ban đầu
    for (int i = 0; i < n; i++) {
        for (int j = b; j >= a[i].w; j--) {
            if (dp[j - a[i].w].w) {
                dp[j].w = 1;
                dp[j].v = max(dp[j - a[i].w].v + a[i].v, dp[j].v);
            }
        }
    }

    int ans = 0;
    for (int i = b; i >= 0; i--) {
        if (dp[i].w)
            ans = max(ans, dp[i].v);
    }

    cout << ans;
    return 0;
}
=======🔴
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
