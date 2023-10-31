#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
  int a,b,c;cin >> a >>b >>c;
  int x = sqrt(a*b/c)*4;
  int y = sqrt(a*c/b)*4;
  int z = sqrt(b*c/a)*4;
  int tong = x+y+z;
  cout <<tong << endl;
}
