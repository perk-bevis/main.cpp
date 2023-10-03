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
≠================××××××××××××××××××××
=================MẢNG ĐỘNG========={{
#include <iostream>
using namespace std;
#define MAX 100
//ham nhap mang 
void nhap_mang(int *a,int n){
    for(int i=0; i < n;i++){
        cout << "\n nhap phan tu a [" << i << "] =";
        cin >> a[i];
    }
}
// ham xuat mang
void xuat_mang(int *a,int n){
    for(int i=0; i < n;i++){
        cout << a[i] << " ";
    }
}
//
void xu_ly(int *a,int n){
    for(int i =0;i<n;i++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int n;
    do{
        cout << "\n nhap so luong phan tu mang: ";
        cin >> n;
        if(n <= 0){
            cout << "\n so luong pt khong hop le";
            system("pause");
        }
    }while(n <= 0);
    // cách 1
    //int *a;
    //a = new int[n];
    // cách 2
    int *a = new int[n];
    cout <<"\n\n\t\t nhap mang\n";
    nhap_mang(a,n);
    cout << "\n\n\t\t xuat mang\n" << " ";
    xuat_mang(a,n);
    cout << "\n\n\t\t  xu ly \n" << " ";
    xu_ly(a,n);
    delete[] a;
    system("pause");
    return 0;
}
=========thuật toán thêm xoá bằng mảng động ============
#include <iostream>
using namespace std;

//ham nhap mang 
void nhap_mang(int *a,int n){
    for(int i=0; i < n;i++){
        cout << "\n nhap phan tu a [" << i << "] =";
        cin >> a[i];
    }
}

// ham xuat mang
void xuat_mang(int *a,int n){
    for(int i=0; i < n;i++){
        cout << a[i] << " ";
    }
    
}
// ham them phan tu vao vi tri bat ki trong mang
void them(int *&a, int &n,int vt,int x){
    //truoc khi them phan tu x vao vt - thi chung ta cap phat vung nho cho mang 
    //b1 tao mang phu temp chua cac phan tu cua mang a
    int *temp = new int[n];
    for(int i=0;i<n;i++){
        temp[i]= a[i];//bo lan luot cac phan tu cua mang a sang cho mang temp
        //b2 giai phong vung nho cua a di truoc 
        delete[] a;
        //b3 cap phat lai vung nho moi cho a ==> mang a se tang len 1 o nho
        a = new int[n +1]; //cap phat lai vung nho cho mang a voi so luong phan tu mang tang len 1 o nho
        //b4 do tat ca cac phan tu cua mang temp ve lai cho mang a
        for(int i =0;i<n;i++){
            a[i] = temp[i];
        }
        delete[] temp;// giai phong vung nho cho temp khi khong can dung nua
    }
    //====ki thuat them====
    //b1 dời 
	for (int i = n; i > vt; i--) {
		a[i] = a[i - 1];
	}
    //b2: chèn
	a[vt] = x;
	//b3 tăng  
	n++;// có thay đổi
}
int main()
{
    int n;
    do{
        cout << "\n nhap so luong phan tu mang: ";
        cin >> n;
        if(n <= 0){
            cout << "\n so luong pt khong hop le";
            system("pause");
        }
    }while(n <= 0);
    int *a = new int[n];
    cout <<"\n\n\t\t nhap mang\n";
    nhap_mang(a,n);
    cout << "\n\n\t\t xuat mang\n" << " ";
    xuat_mang(a,n);
    
    int x;
    cout << "\n nhap phan tu can them: ";
    cin>>x;
    
    int vt;
    cout << "\n nhap vi tri can them: ";
    cin >> vt;
    
    them(a,n,vt,x);
    xuat_mang(a,n);
    delete[] a;
    //system("pause");
    return 0;
}
