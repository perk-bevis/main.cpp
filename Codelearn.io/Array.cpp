⭕Bạn hãy viết chương trình nhập vào từ bàn phím 10 số nguyên và hiển thị ra tổng của 10 số này.

Ví dụ nếu nhập:

2 7 6 3 4 8 9 7 6 10
Thì màn hình sẽ hiển thị:

62
code:
#include<iostream>
using namespace std;
int main() {
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}
🔴Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng. 
Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:

5
2 7 6 8 9
Thì màn hình sẽ hiển thị:

9
Giải thích: mảng này có 5 phần tử và 9 là phần tử lớn nhất trong mảng.
code
#include<iostream>
using namespace std;
int main() {
    int n; cin>> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout << max << endl;

    return 0;
}
🛑Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím. Bạn hãy viết chương trình hiển thị ra tổng của phần tử đầu tiên và cuối cùng trong mảng arr. Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:

5
2 7 6 8 9
Thì màn hình sẽ hiển thị:

11
Nếu bạn chưa làm được bài này thì có thể xem hướng dẫn ở bên dưới.
code:
#include<iostream>
using namespace std;
int main() {
    int n; cin>> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[0] +a[n-1] << endl;
    return 0;
}
🦃Cho một mảng các số nguyên n phần tử arr và số nguyên k được nhập từ bàn phím. Bạn hãy viết chương trình hiển thị ra màn hình số phần tử có giá trị bằng k trong mảng arr.

Ví dụ nếu bạn nhập n = 6, arr = [3, 8, 7, 8, 3, 3], k = 3 như bên dưới:

6
3 8 7 8 3 3
3
Thì màn hình hiển thị lên:

3
Giải thích: trong mảng có 3 phần tử có giá trị bằng 3.

Nếu bạn chưa làm được bài này thì có thể xem hướng dẫn ở bên dưới.
