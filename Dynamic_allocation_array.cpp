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
🛑🔴 HÀM THÊM
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
    }
    //b2 giai phong vung nho cua a di truoc 
    delete[] a;
    //b3 cap phat lai vung nho moi cho a ==> mang a se tang len 1 o nho
    a = new int[n +1]; //cap phat lai vung nho cho mang a voi so luong phan tu mang tang len 1 o nho
        
    //b4 do tat ca cac phan tu cua mang temp ve lai cho mang a
    for(int i =0;i<n;i++){
        a[i] = temp[i];
    }
    delete[] temp;// giai phong vung nho cho temp khi khong can dung nua
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
    int *a;
    int n;
    do{
        cout << "\n nhap so luong phan tu mang: ";
        cin >> n;
        if(n <= 0){
            cout << "\n so luong pt khong hop le";
            system("pause");
        }
    }while(n <= 0);
    a = new int[n];
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
🔴🛑 HÀM XOÁ
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

void xoa(int a[], int &n, int vt) {
  //b1 dời
  for (int i = vt; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  
  //sau khi xoa phan tu tai vi tri vt - thi chung ta can phai thu hep vung nho ban dau
    //b1 tao mang phu temp chua cac phan tu cua mang a
    int *temp = new int[n];
    for(int i=0;i<n;i++){
        temp[i]= a[i];//bo lan luot cac phan tu cua mang a sang cho mang temp
    }
    //b2 giai phong vung nho cua a di truoc 
    delete[] a;
        
    //b3 cap phat lai vung nho moi cho a ==> mang a se giam 1 o nho
    a = new int[n]; //cap phat lai vung nho cho mang a voi so luong phan tu mang giam xuong 1 o nho
        
    //b4 do tat ca cac phan tu cua mang temp ve lai cho mang a
    for(int i =0;i<n;i++){
        a[i] = temp[i];
    }
    delete[] temp;// giai phong vung nho cho temp khi khong can dung nua
    //b2 giam
    n--;
}

int main()
{
    int *a;
    int n;
    do{
        cout << "\n nhap so luong phan tu mang: ";
        cin >> n;
        if(n <= 0){
            cout << "\n so luong pt khong hop le";
            system("pause");
        }
    }while(n <= 0);
    a = new int[n];
    cout <<"\n\n\t\t nhap mang\n";
    nhap_mang(a,n);
    cout << "\n\n\t\t xuat mang\n" << " ";
    xuat_mang(a,n);
 
    int vt;
    cout << "\n nhap vi tri can xoa: ";
    cin >> vt;
    
    xoa(a,n,vt);
    xuat_mang(a,n);
    delete[] a;
    system("pause");
    return 0;
}
✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓
⭕⭕⭕⭕⭕⭕⭕⭕⭕
TẠO HÀM TƯƠNG TỰ GIỐNG HÀM RELLOC BÊN C
🩸🩸CODE:
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
void cap_phat_lai_vung_nho(int *&a, int vung_nho_moi, int vung_nho_cu){
    //b1 tao mang phu temp chua cac phan tu cua mang a
    int *temp = new int[vung_nho_cu];
    for(int i=0;i<vung_nho_cu;i++){
        temp[i]= a[i];//bo lan luot cac phan tu cua mang a sang cho mang temp
        //b2 giai phong vung nho cua a di truoc 
        delete[] a;
        //b3 cap phat lai vung nho moi cho a dua vao vung_nho_moi
        a = new int[vung_nho_moi]; //cap phat lai vung nho cho mang a voi so luong phan tu mang la vung_nho_moi
        }
     //b4 do tat ca cac phan tu cua mang temp ve lai cho mang a
        for(int i =0;i<vung_nho_cu;i++){
            a[i] = temp[i];
        }
        delete[] temp;// giai phong vung nho cho temp khi khong can dung nua
}


void them(int *&a, int &n,int vt,int x){
	//truoc khi them phan tu x vao vt - thi chung ta cap phat vung nho cho mang 
        cap_phat_lai_vung_nho(a,n+1,n);
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

void xoa(int a[], int &n, int vt) {
	//b1 dời
	for (int i = vt; i < n-1; i++) {
	      a[i]=a[i +1];
	}
	cap_phat_lai_vung_nho(a,n,n);
	n--;
}

int main()
{
    int *a;
    int n;
    do{
        cout << "\n nhap so luong phan tu mang: ";
        cin >> n;
        if(n <= 0){
            cout << "\n so luong pt khong hop le";
            system("pause");
        }
    }while(n <= 0);
    a = new int[n];
    cout <<"\n\n\t\t nhap mang\n";
    nhap_mang(a,n);
    cout << "\n\n\t\t xuat mang\n" << " ";
    xuat_mang(a,n);
// ___________ ham them
   int x;
   cout << "\n nhap phan tu can them: ";
   cin>>x;
    
   int vt;
   cout << "\n nhap vi tri can them: ";
   cin >> vt;
    
   them(a,n,vt,x);
   xuat_mang(a,n);
   ====ham xoa======
   int vt;
   cout << "\n nhap vi tri can xoa: ";
    cin >> vt;
    
    xoa(a,n,vt);
    cout << "\n\n\t\t mang sau khi xoa \n";
    xuat_mang(a,n);
    delete[] a;
    //system("pause");
    return 0;
}
=========kĩ thuật trộn mảng động =========
#include<iostream>
using namespace std;

// hàm nhập mảng
void Nhap_Mang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << " ] = ";
		cin >> *(a + i);
	}
}

// hàm xuất mảng
void Xuat_Mang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << "  ";
	}
}

// hàm thêm 1 phần tử x vào vị trí vt trong mảng
void Them(int *&a, int &n, int x, int vt)
{
	for (int i = n - 1; i >= vt; i--)
	{
		*(a + i + 1) = *(a + i);
	}
	*(a + vt) = x;
	n++;
}

// hàm xóa 1 phần tử tại vị trí vt trong mảng
void Xoa(int *&a, int &n, int vt)
{
	for (int i = vt + 1; i < n; i++)
	{
		*(a + i - 1) = *(a + i);
	}
	n--;
}

// 1 2 2 3 1 4 5
void Xoa_Cac_Phan_Tu_Trung_Nhau(int *&a, int &n)
{
	for(int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (*(a + i) == *(a + j))
			{
				// BƯỚC 1: XÓA
				Xoa(a, n, j);
				j--;
				// BƯỚC 2: THU HẸP VÙNG NHỚ BAN ĐẦU
				int *tam = new int[n];
				for (int j = 0; j < n; j++)
				{
					*(tam + j) = *(a + j);
				}
				delete[] a;
				a = new int[n];
				for (int j = 0; j < n; j++)
				{
					*(a + j) = *(tam + j);
				}
				delete[] tam;
				
			}
		}
	}
}


// Khởi tạo mảng 1 chiều động
int main()
{	
	int *a = NULL;
	int *b = NULL;
	int n;
	int m;
	cout << "\nNhap so luong phan tu mang a: ";
	cin >> n;
	a = new int[n]; // cấp phát vùng nhớ động có n ô nhớ bên HEAP <=> mảng 1 chiều động

	cout << "\n\n\t\t NHAP MANG a\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\t XUAT MANG a\n";
	Xuat_Mang(a, n);

	cout << "\nNhap so luong phan tu mang b: ";
	cin >> m;
	b = new int[m];
	cout << "\n\n\t\t NHAP MANG b\n";
	Nhap_Mang(b, m);
	cout << "\n\n\t\t XUAT MANG b\n";
	Xuat_Mang(b, m);
	
	int *c = NULL;
	int k = 0;
	c = new int[n + m];
	// bỏ hết tất cả phần tử mảng a vào mảng c
	for (int i = 0; i < n; i++)
	{
		c[k] = a[i];
		k++;
	}
	// bỏ hết tất cả phần tử mảng b vào mảng c
	for (int i = 0; i < m; i++)
	{
		c[k] = b[i];
		k++;
	}

	cout << "\n\n\t\t XUAT MANG c\n";
	Xuat_Mang(c, k);
	delete[] a; // giải phóng vùng nhớ mảng động cho biến con trỏ
	system("pause");
	return 0;
}
