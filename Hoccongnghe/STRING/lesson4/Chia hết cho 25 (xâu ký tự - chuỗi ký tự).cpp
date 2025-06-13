#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() == 1) {
        if (s == "0") cout << "YES\n";
        else cout << "NO\n";
    } else {
        string lastTwo = s.substr(s.length() - 2); // Lấy 2 chữ số cuối
        if (lastTwo == "00" || lastTwo == "25" || lastTwo == "50" || lastTwo == "75") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
