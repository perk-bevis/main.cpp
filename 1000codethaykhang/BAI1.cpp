Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n; cin >> n;
  long long sum = 1ll*n*(n+1)/2;
  cout << sum << endl;
}
