//thuật toán sắp xếp
#include <iostream>
#include <algorithm>
#define max 1000
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
    int a[max];
    for(int i=0;i<n;i++){
      cin>> a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
      cout << a[i] << " ";
    }
    return 0;
}
//sử dụng vector
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n; cin >>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
      cout << v[i] << " ";
    }
    return 0;
}
