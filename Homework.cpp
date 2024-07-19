Đề: 15. Write a program to calculate electricity bills used during the month:

From 1-100KW: $5/1KW

From 101 - 150KW: $7/1KW

From 151 - 200KW: $10/1KW

From 201-300KW: $15/1KW

From 300KW or more: $20/1KW

For example: A household has an electricity consumption of 180KW, the electricity bill is

Calculate as follows: 5*100+7*50+10*30=1150$
🔴🔴code:
#include <iostream>
using namespace std;

int main() {
    int soDien, tienDien;
    int bac1 = 5, bac2 = 7, bac3 = 10, bac4 = 15, bac5 = 20;
    cout << "Nhap vao so dien cua ban (kW): ";
    cin >> soDien;

    if (soDien <= 0) {
        cout << "\nVui long nhap lai So Dien\nSo dien khong duoc nho hon hoac bang 0\n";
    } else if (soDien <= 100) {
        tienDien = soDien * bac1;
        cout << "\nban da dung dien trong khoang 0 - 100 kW so tien ban phai tra la: " << tienDien << endl;
    } else if (soDien <= 150) {
        tienDien = 100 * bac1 + ((soDien - 100) * bac2);
        cout << "\nban da dung dien trong khoang 101 - 150 kW so tien ban phai tra la: " << tienDien << endl;
    } else if (soDien <= 200) {
        tienDien = 100 * bac1 + (50 * bac2) + ((soDien - 150) * bac3);
        cout << "\nban da dung dien trong khoang 151 - 200 kW so tien ban phai tra la: " << tienDien << endl;
    } else if (soDien <= 300) {
        tienDien = 100 * bac1 + (50 * bac2) + (50 * bac3) + ((soDien - 200) * bac4);
        cout << "\nban da dung dien trong khoang 201 - 300 kW so tien ban phai tra la: " << tienDien << endl;
    } else if (soDien > 300) {
        tienDien = 100 * bac1 + (50 * bac2) + (50 * bac3) + (100 * bac4) + ((soDien - 300) * bac5);
        cout << "\nban da dung dien tren 300 kW so tien ban phai tra la: " << tienDien << endl;
    }

    return 0;
}
