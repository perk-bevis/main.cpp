//tính khoảng cách
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
  int x1,y1,x2,y2; cin >> x1>>y1>>x2>>y2;
  double khoangcach = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  cout << fixed << setprecision(2) << khoangcach << endl;
}
