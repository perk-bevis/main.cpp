🔴1. Nhận n số nguyên dương từ bàn phím. Xuất ra màn hình kết quả nhỏ nhất(không sử dụng mảng).
  
code:
#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    
    return 0;
}
2.(tư duy)
Tìm tất cả các phương án kết hợp 3 loại giấy bạc 100đ, 200đ, 500đ với nhau để cho ra số tiền 10000đ.

Phương án    1: 0 tờ 100đ,  5 tờ 200đ, 18 tờ 500đ
Phương án    2: 0 tờ 100đ, 10 tờ 200đ, 16 tờ 500đ
…
Phương án 537: 98 tờ 100đ,  1 tờ 200đ,  0 tờ 500đ

3. Viết ct in ra tam giác cân * theo hình:


   *
  ***
 *****
*******

code:
#include <iostream>
using namespace std;
int main() {
    int n = 4;
	for(int i = 0;i < n;i++){
		 for(int j = 0;j<n-i-1;j++){
			   cout << " "; 
		 } 
		 for(int k = 0; k<2*i+1;k++){
			   cout << "*"; 
		 } 
		  cout << endl; 
	} 
    return 0;
}
//---------- nâng cao -------------
4. Viết CT nhập vào ngày tháng năm. In ra màn hình ngày trước, và sau.
VD: nhập: 1/3/2019
        xuất:  Ngày trước: 28/2/2019       Ngày sau: 2/3/2019
Lưu ý: kiểm tra năm nhuận để tính ngày tháng 2

5. Viết chương trình nhập giá tiền: từ 1k -> 900k
Xuất ra cách đọc tương ứng
VD: Nhập: 255000        Xuất: hai trăm năm mươi năm nghìn Việt Nam đồng
// Bài này được ứng dụng trong các đồ án quản lý vật tư

6. Viết chương trình in ra bảng cửu chương (không cần trình bày đẹp)
==============================================================================================================================
7. Viết ct Tính UCLN, BCNN 2 số nguyên a,b
8. viết ct nhập n số nguyên, tìm số lớn nhất, nhỏ nhất.// ko sử dụng mảng
9. Viết hàm nhập vào điểm -> xuất ra học lực của học sinh. // 9,10 giỏi, 78 khá, 456 tb, 0123 yếu
10. Viết ct hoán vị 2 số nguyên a,b
11. Viết hàm nhập vào tuổi -> xuất ra năm sinh
code: 
🔴câu 7:
#include <iostream>
using namespace std;

int main(){
	//liet ke cac uoc cua a : int a=8;
	int a=8;// 8 7 6 5 4 3 2 1 => a%i == 0  
	int b=6;// 6 5 4 3 2 1 => b%i == 0
	int min = (a<b) ? a : b;
	for(int i = min;i>0;i--){
		if(a%i == 0 && b% i == 0){
			cout << i << endl; 
			break; 
		} 
	} 
} 
hoàn chỉnh: UCLN(a,b)
#include <iostream>
using namespace std;

int ucln(int a,int b){
	int min = (a<b) ? a : b;
	for(int i = min;i>0;i--){
		if(a%i == 0 && b% i == 0){
			return i; 
		} 
	} 
} 
int main(){
	//liet ke cac uoc cua a : int a=8;
	int a=8;// 8 7 6 5 4 3 2 1 => a%i == 0  
	int b=6;// 6 5 4 3 2 1 => b%i == 0
	cout << ucln(a,b) << endl;
	return 0; 
} 
🔴 hoàn chỉnh BCNN:
#include <iostream>
using namespace std;
int bcnn(int a, int b){
	int max = (a>b) ?a:b;
c1:	
	while(true) {
		if(max %a == 0 && max %b == 0){
			return max; 
		} 
	    max++;	
	}
	c2:
        while(max %a != 0 || max %b != 0){
    	     max++; 
	} 
	return max; 
} 

int main(){
	int a ,b ; cin >> a >> b; 
	cout << bcnn(a , b)<< endl; 
	return 0; 
} 
🔴 GIẢI THUẬT EUCLID <UCLN - BCNN>
#include <iostream>
using namespace std;

int ucln(int a,int b){
	while(a != b){
		if(a >b){
			a = a-b; 
		} 
		else if(b > a){
			b = b -a; 
		} 
	}
	return a; 
} 

int bcnn(int a, int b){
	return (a*b) / ucln(a , b); 
} 

int main(){
	int a,b ; cin >> a,b;
	cout << ucln(a,b) << endl;
	cout << bcnn(a,b) << endl;
	return 0; 
} 
