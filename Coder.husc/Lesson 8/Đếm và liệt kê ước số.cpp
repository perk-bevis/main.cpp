#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i =1;i<=n;i++){
      if(n%i ==0){
        count ++;
      }
    }
    cout << count << endl;
    for(int i= 1;i<=n;i++){
      if(n%i == 0){
        cout << i << " ";
      }
    }
    return 0;
}

//cách 2:
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    cout << count << endl;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0 && i != n / i) {
            cout << n / i << " ";
        }
    }

    cout << endl;
    return 0;
}
// cách 2 sd hàm
#include <iostream>
#include <cmath>
using namespace std;
int demuoc(int n){
   int count = 0;
   for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
   }
   return count;
}
void inuoc(int n){
  for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0 && i != n / i) {
            cout << n / i << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    cout << demuoc(n)<< endl;
    inuoc(n);
    return 0;
}
