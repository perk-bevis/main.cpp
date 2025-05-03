#include <iostream>
#include <iomanip>
using namespace std;
#define Max 1001
bool snt(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>> n;
    long long a[Max];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(snt(a[i])){
           sum += a[i];
           count ++;
        }
    }
    if (count == 0) {
        cout << "Không có số nguyên tố" << endl;
    } else {
        cout << fixed << setprecision(2) << (double)sum / count << endl;
    }
    return 0;
}
