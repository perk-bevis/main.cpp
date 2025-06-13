#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string s;
    cin >> s;

    string ketQua = "";
    int dem = 0;
    int n = s.length();

    for (int i = n - 1; i >= 0; --i) {
        ketQua = s[i] + ketQua; 
        dem++;
        
        if (dem % 3 == 0 && i != 0) {
            ketQua = ',' + ketQua; 
        }
    }

    cout << ketQua << endl;

    return 0;
}
