#include <iostream>
#define Max_dong 101
#define Max_cot 101
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int mark[Max_dong][Max_cot] = {0};
    
    while (n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                mark[x][y] = 1;
            }
        }
    }
    int cnt = 0;
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            if (mark[x][y] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
