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
