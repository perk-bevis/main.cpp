cách 1:
#include <iostream>
#define Max 1000001
using namespace std;

int main()
{
    int n; cin >>n;
    int a[Max];
    for(int i = 0;i<n;i++){
      cin >> a[i];
    }
    int res = 1000000000;
    for(int i = 0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(abs(a[i] -a[j]) < res){
          res = abs(a[i] -a[j]);
        }
      }
    }
    cout << res;
    return 0;
}
cách 2:
#include <iostream>
#define Max 1000001
using namespace std;
void selection_sort(int a[],int n){
  for(int i=0;i<n-1;i++){
    int min_pos = i;
    for(int j=i+1;j<n;j++){
      if(a[j] < a[min_pos]){
        min_pos = j;
      }
    }
    swap(a[i],a[min_pos]);
  }
}
int main()
{
    int n; cin >>n;
    int a[Max];
    for(int i = 0;i<n;i++){
      cin >> a[i];
    }
    selection_sort(a,n);
    int res = 1000000000;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(abs(a[i] -a[j]) < res){
          res = abs(a[i] -a[j]);
        }
      }
    }
    cout << res;
    return 0;
}
