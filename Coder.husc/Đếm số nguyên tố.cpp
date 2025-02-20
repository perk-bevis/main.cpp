#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra một số có phải số nguyên tố hay không
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int soPhanTu;
    cin >> soPhanTu;
    
    int demSoNguyenTo = 0;
    for (int i = 0; i < soPhanTu; i++) {
        int giaTri;
        cin >> giaTri;
        if (laSoNguyenTo(giaTri)) {
            demSoNguyenTo++;
        }
    }
    
    cout << demSoNguyenTo << endl;
    
    return 0;
}
