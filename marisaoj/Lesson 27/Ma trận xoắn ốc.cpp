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
    if (y2 == y1) {
        for (int i = x1; i <= x2; i++) {
            a[i][y1] = d++;
        }
        return;
    }
    if (x2 == x1) {
        for (int j = y1; j <= y2; j++) {
            a[x1][j] = d++;
        }
        return;
    }
 
    
    for (int j = y1; j <= y2; j++) {
        a[x1][j] = d++;
    }
    
    for (int i = x1 + 1; i <= x2; i++) {
        a[i][y2] = d++;
    }
    if (x2 - x1 > 0 && y2 - y1 > 0) {
        x1++; y2--;
        bottomLeft(a, x1, y1, x2, y2);
    }
}
 
void bottomLeft(int a[][Max_cot], int x1, int y1, int x2, int y2) {
    for (int j = y2; j >= y1; j--) {
        a[x2][j] = d++;
    }
    for (int i = x2 - 1; i >= x1; i--) {
        a[i][y1] = d++;
    }
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
