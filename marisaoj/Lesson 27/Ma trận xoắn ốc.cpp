#include <iostream>
#define Max_dong 100
#define Max_cot 100
using namespace std;
 
int d = 1;
 
void topRight(int a[][Max_cot], int x1, int y1, int x2, int y2);
void bottomLeft(int a[][Max_cot], int x1, int y1, int x2, int y2);
void result(int a[][Max_cot], int n, int m);
 
int main() {
    int n, m;
    cin >> n >> m;
    int a[Max_dong][Max_cot];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    topRight(a, 0, 0, n-1, m-1);
    result(a, n, m);
    return 0;
}
 
void topRight(int a[][Max_cot], int x1, int y1, int x2, int y2) {
    //trường hợp chỉ còn 1 cột
    if (y2 == y1) {
        for (int i = x1; i <= x2; i++) {
            a[i][y1] = d++;
        }
        return;
    }
    // trường hợp chỉ còn 1 hàng
    if (x2 == x1) {
        for (int j = y1; j <= y2; j++) {
            a[x1][j] = d++;
        }
        return;
    }
 
    // điền hàng trên cùng từ trái qua phải
    for (int j = y1; j <= y2; j++) {
        a[x1][j] = d++;
    }
    // điền cột bên phải từ trên xuống dưới
    for (int i = x1 + 1; i <= x2; i++) {
        a[i][y2] = d++;
    }
    //chuyển sang phần tử còn lại theo hướng bottomLeft
    if (x2 - x1 > 0 && y2 - y1 > 0) {
        x1++; y2--;
        bottomLeft(a, x1, y1, x2, y2);
    }
}
 
void bottomLeft(int a[][Max_cot], int x1, int y1, int x2, int y2) {
    //điền hàng dưới cùng từ phải sang trái
    for (int j = y2; j >= y1; j--) {
        a[x2][j] = d++;
    }
    // điền cột bên trái từ dưới lên trên
    for (int i = x2 - 1; i >= x1; i--) {
        a[i][y1] = d++;
    }
    //chuyển sang phần tử còn lại theo hướng topRight
    if (x2 - x1 > 0 && y2 - y1 > 0) {
        x2--; y1++;
        topRight(a, x1, y1, x2, y2);
    }
}
 
void result(int a[][Max_cot], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
