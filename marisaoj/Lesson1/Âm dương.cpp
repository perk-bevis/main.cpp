#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >>n;
	int  a[n];
	int  b[n];
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	int m=1; //Chỉ số của mảng b,dùng để lưu các phần tử từ mảng a thỏa mãn điều kiện
	for (int i=1;i<=n;i++){
		if (a[i]<0){
                   b[m]=a[i];
                   m++;
		}
        }
	for (int i=1;i<=n;i++){
        if (a[i]>0){
            b[m]=a[i];
            m++;
        }
	}
	for (int i=1;i<=n;i++){
            cout <<b[i]<<" ";
        }
	return 0;
}
