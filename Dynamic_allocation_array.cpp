🔴mảng tĩnh:
nhập vào mảng một chiều các số nguyên viết chương trình in ra các phần tử là số chẵn của mảng
code:
#include <iostream>
using namespace std;
#define MAX 100
//ham nhap mang 
void nhap_mang(int a[],int n){
    for(int i=0; i < n;i++){
        cout << "\n nhap phan tu a [" << i << "] =";
        cin >> a[i];
    }
}
// ham xuat mang
void xuat_mang(int a[],int n){
    for(int i=0; i < n;i++){
        cout << a[i] << " ";
    }
}
//
void xu_ly(int a[],int n){
    for(int i =0;i<n;i++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[MAX];
    int n;
    do{
        cout << "\n nhap so luong phan tu mang: ";
        cin >> n;
        if(n <= 0 || n > MAX){
            cout << "\n so luong pt khong hop le";
            system("pause");
        }
    }while(n <= 0 || n > MAX);
    cout <<"\n\n\t\t nhap mang";
    nhap_mang(a,n);
    cout << "\n\n\t\t xuat mang" << " ";
    xuat_mang(a,n);
    cout << "\n\n\t\t  xu ly " << " ";
    xu_ly(a,n);
    system("pause");
    return 0;
}
