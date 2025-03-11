#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int count[10] ={0};
    for(int i =0; i<n;i++){
      cin >> a[i];
    }
    for(int i =0;i<n;i++){
      int num = abs(a[i]);
      while (num > 0){
        int result = num % 10;
        count[result]++;
        num /=10;
      }
    }
    for (int result = 0; result < 10; ++result) {
        if (count[result] > 0) {
            cout << result << " " << count[result] << endl;
        }
    }
    return 0;
}
