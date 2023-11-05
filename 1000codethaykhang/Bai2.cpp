
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n; cin >> n;
  long long sum = 1ll*n*(n+1)*(2*n+1)/6;
  cout << sum << endl;
}
