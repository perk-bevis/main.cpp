Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k)  < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
_________________
// dùng while
#include <iostream>
using namespace std;

int main(){
  long long int n ,i=0,s=0;
  cin >> n;
  while(s+i<n){
    i++;
    s+=i;
  }
  cout << i<< endl;
}

// dùng for
#include <iostream>
using namespace std;

int main(){
  long long int n ,i=0,s=0;
  cin >> n;
  for(;s+i<n; ++i){
    s+=i;
  }
  cout << i -1<< endl;
}
