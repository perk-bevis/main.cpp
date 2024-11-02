🔴Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Input Format

Số nguyên x

Constraints

-10^5≤x≤10^5

Output Format

In ra kết quả cùa biểu thức

Sample Input 0

2
Sample Output 0

23
  
code:
  
#include <iostream>
using namespace std;

int main(){
	int x; cin >> x;
	int sum = x*x*x + 3*x*x + x+1;
	cout << sum << endl;
	return 0;  
} 
===========
🔴ex2
Yêu cầu: Cho ba số nguyên a , b và c, hãy tính S = a*(b+c)+b*(a+c).

Input Format

3 số a, b, c trên 1 dòng.

Constraints

-10^8≤a,b,c≤10^8

Output Format

In ra giá trị của biểu thức.

Sample Input 0

1 2 3
Sample Output 0

13

code:
#include <iostream>
using namespace std;

int main(){
	int a,b,c; cin >> a>> b>> c;
	int sum = a*(b+c)+b*(a+c);
	cout << sum << endl; 
	return 0; 
} 
🔴Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32. Viết chương trình cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)

Input Format

Nhiệt độ ở độ C là một số nguyên không âm.

Constraints

0≤n≤10^6

Output Format

Kết quả đổi từ độ C sang độ F

Sample Input 0

24
Sample Output 0

75.20

code:
#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std;

int main(){
	int c; cin >> c;
	double f =(float)c*9/5+32;
	cout << fixed << setprecision(2) << f << endl; 
	return 0; 
} 
🔴Cho bán kính R của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó. Lấy PI = 3.14. Công thức tính chu vi = 2 * PI * R, diện tích = PI * R * R

Input Format

1 dòng chứa bán kính R là số nguyên dương.

Constraints

1≤R≤1000

Output Format

In ra chu vi và diện tích trên 1 dòng, kết quả lấy độ chính xác 4 số sau dấu phẩy.

Sample Input 0

10
Sample Output 0

62.8000 314.0000
code:
#include <iostream>
#include <iomanip>
#include <math.h>  
using namespace std;

int main(){
	int r; cin >> r;
	double chuvi = 2 * 3.14 * r;
	double dientich = 3.14 * r * r;
	cout << fixed << setprecision(4) << chuvi << " "<< dientich << endl; 
	return 0; 
} 
Có nhiều khoảng cách giữa 2 điểm trong hệ tọa độ ví dụ như khoảng cách Manhattan, Euclid, Minkowski. Nhưng trong chương trình toán phổ thông các bạn sử dụng nhiều nhất là khoảng cách Euclid. Vì vậy bạn hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy

Input Format

Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên

Constraints

-10^6≤xi,yi≤10^6

Output Format

In ra khoảng cách giữa 2 điểm, lấy độ chính xác 2 số sau dấu phẩy.

Sample Input 0

1 4 4 8
Sample Output 0

5.00
code:
#include <iostream>
#include <iomanip>
#include <math.h>  
using namespace std;

int main(){
	int x1,y1,x2,y2; cin>> x1 >> y1 >> x2 >> y2;
	double dis =sqrt(pow(x1 - x2, 2)+pow(y1-y2, 2));
	cout<< fixed << setprecision(2) << dis << endl; 
	return 0; 
} 
