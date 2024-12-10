
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] != 28){
            b[k] = a[i];
            k += 1;
        }
    }
    if(k == 0){
        cout << "EMPTY" << endl;
    } else {
        for (int i = 0; i < k; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    delete[] a;
    delete[] b;
    return 0;
}
