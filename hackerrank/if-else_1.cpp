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
