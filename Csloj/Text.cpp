#include <iostream>
#define Max 100
using namespace std;

void nhap(int a[], int n);
void xuat(int a[], int n);
void tinh_tong(int a[], int n);
int main() {
  int a[Max];
  int n = 0;
  do {
    cout << "nhap n:"; cin >> n;
  } while (n <=0 || n > Max);
  nhap(a, n);
  xuat(a, n);
  tinh_tong(a, n);
  
  return 0;
}
void nhap(int a[], int n)
{
  cout << "=====Nhap=======" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Nhap pt thu " << i << ": "; cin >> a[i];
  }
}
void xuat(int a[], int n)
{
  cout << "======Xuat======" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Pt thu " << i << " la: " << a[i] << endl;
  }
}
bool kiem_tra_chu_so_chan(int x){
  if(x < 10) return false;
  x/=10;
  int temp = x %10;
  return(temp % 2 == 0);
}
void tinh_tong(int a[], int n){
  int sum =0;
  for(int i =0; i<n;i++){
    if(kiem_tra_chu_so_chan(a[i]) == true){
      sum += a[i];
    }
  }
  cout << sum << " ";
}
