1. Viết chương trình nhập số nguyên dương x, xếp loại x là số gì (dương, âm, 0)
Test1: 
input: x = 5
output: x la so duong
code :
#include <iostream>
using namespace std;

int main() {
    int x; cin >> x;
    if(x > 0){
    	cout << "x la so duong\n"; 
	} else if(x < 0){
		cout << "x la so am\n"; 
	} else {
		cout << "x la so 0\n"; 
	} 
    return 0;
}
Test2:
input: x = 0
output: x la so 0

2. Viết chương trình nhập số nguyên dương có 1 chữ số, đọc số nguyên đấy.
input: x = 7
output: bay

input: 15
output: kho qua, nhap so de hon di!!!
code: 
#include<iostream>
using namespace std;

int main()
{
	int so;
	cin >> number;
	if (number == 7)
	{
		cout << "bay" << endl;
	}
	else if (number == 15)
	{
		cout << "kho qua, nhap so de hon di" << endl;
	}
	return 0;
}
3. Viết chương trình giải Pt bậc 1: ax + b = 0
code:
#include <iostream> 
using namespace std;
 
int main()
{
    int a,b;
    cin >>a >> b;
    if(a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        double result = (double)-b/a;
        cout << "Phuong trinh co nghiem la: " << result << endl;
    }
    return 0;
}
4. viết chương trình giải phương trình bậc 2: ax2 + bx + c = 0
code:
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, delta;
    double x1, x2;

    cout << "Nhap he so a, b, c cua phuong trinh: ";
    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "INF" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            x1 = -c / b;
            cout << fixed << setprecision(2) << x1 << endl;
        }
    } else {
        if (delta < 0) {
            cout << "NO" << endl;
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            cout << fixed << setprecision(2) << x1 << endl;
        } else {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
        }
    }

    return 0;
}
5. Viết chương trình xếp loai học lực cho học sinh dựa vào điểm trung bình nhập từ bàn phím
input: diem = 7.5
ouput: Kha
code:

6. Viết chương trình nhập tháng hiện tại vào in ra số ngày trong tháng, biết tháng 2 năm nhuận có 29 ngày, năm không nhuận có 28 ngày. Cứ 4 năm sẽ có 1 năm nhuận(năm nhuận là năm chia hết cho 4)
input: 12
output: 31 ngay
code :

=========================================================================================================================

Bài 1. Nhập vào 1 số nguyên n(n > 0). Tính tổng 2 + 4 + 6 +...+ (2*n)
code:

#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int sum = 0;
    for(int i = 2;i <= 2*n;i+=2){
      sum+=i;
    }
    cout << sum << endl;
    return 0;
}
input: 6
output: 42

Bài 2. Nhập vào 1 số nguyên dương n , điều kiện 0 < n < 20. Tính giai thừa của số nguyên dương n.
	
code:
#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int factorial = 1;
    for(int i = 1;i <= n;i++){
      factorial *= i;
    }
    cout << factorial << endl;
    return 0;
}

Bài 3. Nhập vào số nguyên dương n(n > 0). Viết chương trình tách các chữ số của số nguyên dương n ?
VD: n = 1675
==> gồm các chữ số
5  
7  
6  
1
code:

Bài 4. Nhập vào 1 số nguyên n(n > 0). Tính tổng các " chữ số lẻ " của số nguyên dương n.
code
#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    if(){
	    
    }
}
Bài 5.
- Nhà bạn A có n đôi vớ, mỗi ngày bạn A mang 1 đôi, mang xong thì vứt bỏ
- Cứ m ngày thì mẹ bạn A mua thêm cho A một đôi vớ mới.
- Hỏi bạn A mang vớ bao nhiêu ngày thì hết vớ để mang.
vd1:
INPUT: m = 2, n = 2
OUTPUT: 3
vd2: INPUT: m = 3, n = 9
OUTPUT: 13

code:
### CÁCH 1:
#include <iostream>
using namespace std;

//bắt đầu n
//kết thúc == 0;
//độ lệch : 1 đơn vị
int main() {
	int n, m;
	cout << "nhap n: "; cin >> n;
	cout << "nhap m: "; cin >> m;

	int dem_ngay = 0;
	int dem_du_ngay = 0;// == m ngày => mua thêm vớ: n++;
	while (n != 0) {
		//1 ngày
		dem_ngay++;
		dem_du_ngay++;
		n--;// bước lặp
		if (dem_du_ngay == m) {
			n++;
			dem_du_ngay = 0;// rs đếm đủ ngày
		}
	}
	cout << "so ngay mang het vo la:" << dem_ngay << endl;
	return 0;
}
cách 2:
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "nhap n: "; cin >> n;
	cout << "nhap m: "; cin >> m;

	int dem_ngay = 0;
	while (n != 0) {
		//1 ngày
		dem_ngay++;
		n--;
		if (dem_ngay % m == 0) {
			n++;
		}
	}
	cout << "so ngay mang het vo la:" << dem_ngay << endl;
	return 0;
}
cách 3:
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "nhap n: "; cin >> n;
	cout << "nhap m: "; cin >> m;

	int dem_ngay = 0;
	while (n >= m) {
		dem_ngay+=m;
		n-=m;
		n++;
	}
	dem_ngay +=n; 
	cout << "so ngay mang het vo la:" << dem_ngay << endl;
	return 0;
}
cách 4:
#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "nhap n: "; cin >> n;
	cout << "nhap m: "; cin >> m;
	int gio =n; 
	while (n % m != 0) {
		int ps = n/m;
		int du = n%m;
		
		gio = gio + ps;
		n = ps + du; 
	}
	cout << "so ngay mang het vo la:" << dem_ngay << endl;
	return 0;
}


6.(BT tư duy) Hoán vị 2 biến bằng 2 cách

cách 1: dùng biến trung gian
#include <iostream>
using namespace std;
int main() {
    int a =3;
    int b =7;
	int tam = a;
	a = b;
	b = tam;
	cout << a << endl;
	cout << b << endl;
    return 0;
}

cách 2: không dùng biến trung gian

#include <iostream>
using namespace std;
int main() {
    int a =3;
    int b =7;
	a = a+b; 
	b = a-b;
	a = a-b; 
	cout << a << endl;
	cout << b << endl;
    return 0;
}
