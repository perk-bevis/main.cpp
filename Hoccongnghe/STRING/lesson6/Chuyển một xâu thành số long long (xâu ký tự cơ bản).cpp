#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long so = stoll(s);

    cout << so << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
long long chuyen(string s) {
    long long result = 0;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        result = result * 10 + (c - '0');
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    long long so = chuyen(s);
    cout << so << endl;
    return 0;
}
