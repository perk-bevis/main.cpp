Bài 30: Cho số nguyên dương n. Kiểm tra xem n 
có phải là số hoàn thiện hay không
___________________
#include<iostream>
using namespace std;

int main()
{
    int i, n;
    long S;
    do
    {
    cout <<"\nNhap n(n > 0): " << endl;
    cin >> n;
      if(n <= 0)
       {
        cout <<"\n N phai > 0. Xin nhap lai !"<< endl;
       }
    }while(n <= 0);
    i = 1;
    S = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
           S = S + i;
        }
            i++;
    }
    if(S == n)
        cout << S <<" la so hoan thien" << endl;
    else
        cout <<"\nSo nhap vao khong la so hoan thien"<< endl;
    getch();
    return 0;
}
