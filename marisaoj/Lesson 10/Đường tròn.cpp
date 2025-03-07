#include <iostream>
#define Max 1000
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[Max];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x, y;
    cin >> x >> y;
    
    if (x == y) {
        cout << "0" << endl;
        return 0;
    }
    //chỉ số trong mảng a
    x = x - 1;
    y = y - 1;
    // tính chu vi
    int perimeter = 0;
    for (int i = 0; i < n; i++) {
        perimeter += a[i];
    }
    // tính khoảng cách theo chiều xuôi 
    int fr = 0;
    int i = x;
    while (i != y) {
        fr += a[i];
        i = (i + 1) % n; 
    }
    // tính khoảng cách theo chiều ngược
    int fl = perimeter - fr;
    cout << min(fr, fl) << endl;

    return 0;
}
