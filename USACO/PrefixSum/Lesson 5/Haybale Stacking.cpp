#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> height(N + 2, 0);
    
    for (int i = 0; i < K; ++i) {
        int a, b;
        cin >> a >> b;
        height[a] += 1;
        height[b + 1] -= 1;
    }
    
    vector<int> v_height;
    int cur = 0;
    for (int i = 1; i <= N; ++i) {
        cur += height[i];
        v_height.push_back(cur);
    }
    sort(v_height.begin(), v_height.end());
    cout << v_height[N / 2] << endl;

    return 0;
}
