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

6.(BT tư duy) Hoán vị 2 biến bằng 2 cách
cách 1: dùng biến trung gian
cách 2: không dùng biến trung gian
