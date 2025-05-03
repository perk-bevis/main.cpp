#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int breed[n + 1];

    int prefix1[n + 1];
    int prefix2[n + 1];
    int prefix3[n + 1];
    prefix1[0] = 0;
    prefix2[0] = 0;
    prefix3[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> breed[i];
        prefix1[i] = prefix1[i - 1] + (breed[i] == 1);
        prefix2[i] = prefix2[i - 1] + (breed[i] == 2);
        prefix3[i] = prefix3[i - 1] + (breed[i] == 3);
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        int count1 = prefix1[b] - prefix1[a - 1];
        int count2 = prefix2[b] - prefix2[a - 1];
        int count3 = prefix3[b] - prefix3[a - 1];

        cout << count1 << " " << count2 << " " << count3 << endl;
    }

    return 0;
}
