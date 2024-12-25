🔴 TRỘM VÀNG
Kid là một siêu đạo chích khét tiếng. Hắn ta thường đột nhập vào dinh thự của những lão nhà giàu xấu tính và lấy đi những món đồ có giá trị.
Hắn có một chiếc túi có thể mang trọng lượng tối đa là K.
Hôm nay hắn sẽ đột nhập vào nhà của lão Gosho để trộm vàng. 
Trong hộp vàng của lão Gosho có 3 thỏi vàng có trọng lượng lần lượt là m, n, q. Hãy xác định trọng lượng vàng tối đa mà Kid có thể lấy được.
Dữ liệu vào:
Dòng đầu ghi số nguyên dương K (K<1012)
Dòng tiếp theo gồm 3 số nguyên dương m, n, q (m, n, q <1012) Dữ liệu ra: Một số nguyên duy nhất là trọng lượng tối đa có thể lấy được. Ví dụ:
TROMVANG.INP 
15
5 7 6
TROMVANG.OUT 
13
Ràng buộc: 50% số test có các giá trị không quá 109
code
#include <iostream>
using namespace std;

int main()
{
   int k,a,b,c,d,h,kh;
   cin>>k>>a>>b>>c;
   int t=a+b+c;
   if(t<=k){
      cout<<t; 
  }else {
       if(a+b<=k){
         d=a+b;
       }
       if(a+c<=k){
         h=a+c;
       }
       if(c+b<=k){
         kh=b+c;
       }
       int q =0;
       if(a <=k){
         q = max(q,a);
       }
       if(b <=k){
         q = max(q,b);
       }
       if(c <=k){
         q = max(q,c);
       }
       cout<<max(d,max(h,kh));
    }
    return 0;
}
