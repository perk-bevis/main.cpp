
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "\nNhap gia tri n: ";
  cin >> n;

  bool Kiem_Tra = true; // giả sử n là số nguyên tố

  if(n < 2)
  {
    Kiem_Tra = false;
  }
  else if(n > 2)
  {
    if(n % 2 == 0)
    {
      Kiem_Tra = false;
    }
    else // if(n % 2 != 0)
    {
      for(int i = 2; i <= n; i++)
      {
        if(n % i == 0)
        {
          Kiem_Tra = false;
          break;
        }
      }
    }
  }

  if(Kiem_Tra == true)
  {
    cout << n << " la so nguyen to";
  }
  else 
  {
    cout << n << " khong phai la so nguyen to";
  }
  return 0;
}
