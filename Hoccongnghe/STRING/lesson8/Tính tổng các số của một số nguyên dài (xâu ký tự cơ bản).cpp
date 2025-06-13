#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        sum += c - '0';
    }

    cout << sum << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long sum = 0;
    for (char c : s) {
        sum += c - '0';
    }

    cout << sum << endl;
    return 0;
}
