#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> A;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        A.push_back(x);
    }
    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        A.insert(A.begin() + x-1, y);
        for (ll j = 0; j < A.size(); j++)
        {
            cout << A[j] << " ";
        }
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

const int nmax = 1e6 + 7;

void chen(int a[], int b[], int &d, int vt, int x) {
    a[vt] = x; //chèn x vào vị trí vt
    // a[1] = 0
    //chèn gt 0 vào vt 1 mảng trở thành [0,2,3]
    //d= max(3+1,1) =4
    // a[5] = 5
    //chèn gt 5 vào vt 5 mảng trở thành [0,1,2,3,5]
    //d= max(4+1,5) =5
    // a[5] = 4
    //chèn gt 4 vào vt 5 mảng trở thành [0,1,2,3,4]
    //d= max(5+1,5) =6
    int i = 1, j = 1;
    while (i <= d) {//duyệt từ 1 đến 3
        if (j != vt) { //nếu j k phải vt cần chèn
            a[j] = b[i];//sao chép lại phần tử của b sang a
            j++;//tăng i và j lên 1 đơn vị
            i++;
        } else {
            j++;
        }
    }
   // Duyệt vòng lặp while (i <= d)
   //Lần 1: i = 1, j = 1, vt = 1 → Bỏ qua (j++)
   //Lần 2: i = 1, j = 2 → a[2] = b[1] = 1
   //Lần 3: i = 2, j = 3 → a[3] = b[2] = 2
   //Lần 4: i = 3, j = 4 → a[4] = b[3] = 3
   //a[0,1,2,3]
   
   // truy vấn 2
   //Lần 1: i = 1, j = 1 → a[1] = b[1] = 0
   //Lần 2: i = 2, j = 2 → a[2] = b[2] = 1
   //Lần 3: i = 3, j = 3 → a[3] = b[3] = 2
   //Lần 4: i = 4, j = 4 → a[4] = b[4] = 3
   //Lần 5: i = 5, j = 5 → Bỏ qua (j++)
   //a = [0, 1, 2, 3, 5]
   
   //truy vấn 3
   //Lần 1: i = 1, j = 1 → a[1] = b[1] = 0
   //Lần 2: i = 2, j = 2 → a[2] = b[2] = 1
   //Lần 3: i = 3, j = 3 → a[3] = b[3] = 2
   //Lần 4: i = 4, j = 4 → a[4] = b[4] = 3
   //Lần 5: i = 5, j = 5 → Bỏ qua (j++)
   //Lần 6: i = 5, j = 6 → a[6] = b[5] = 5
   //a=[0,1,2,3,4,5]
   d = max(d + 1, vt);//cập nhật độ dài 
}

int main() {
    int a[nmax], b[nmax];
    // giá trị truy vấn q
    // lưu giá trị hiện tại của mảng vào d
    //n=3(số lượng phần tử mảng) q=3(số lượng truy vấn)
    // d=3(độ dài mảng)
    int n, q, d;

    cin >> n >> q;
    d = n;
    //i = 1;1<=3 / a[1]=1 a[2] = 2 a[3] = 3
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];// b[1,2,3]
    }
    //while(3--)
    while (q--) {
        int vt, x;// vt là vị trí chèn của phần tử
        // x là giá trị cần chèn vào mảng
        cin >> vt >> x; 
        //truy vấn 1(1 0)
        //truy vấn 2(5 5)
        //truy vấn 3(5 4)
        chen(a, b, d, vt, x); 

        for (int i = 1; i <= d; i++) {
            cout << a[i] << ' ';
            b[i] = a[i]; //sao chép lại phần tử của mảng a sang mảng b 
        }
        cout << '\n';
    }
    return 0;
}
