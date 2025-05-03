#include <iostream>
#include <numeric>
#define Max 10000001
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
    int n,k; cin >>n >>k;
    int a[Max];
    for(int i = 0;i<n;i++){
      cin >> a[i];
    }
    selection_sort( a,n);
    int b= accumulate(a, a+ k, 0);
    int c = accumulate(a + k, a + n, 0);
    int dif1 = abs(c - b);

    int d = accumulate(a+ (n- k), a+ n, 0);
    int e = accumulate(a, a + (n - k), 0);
    int dif2 = abs(e - d);

    cout << max(dif1, dif2);
    return 0;
}

cách 2:
#include <iostream>
#include <numeric>
#include <algorithm>

#define Max 10000001
using namespace std;
int main()
{
    int n,k; cin >>n >>k;
    int a[Max];
    for(int i = 0;i<n;i++){
      cin >> a[i];
    }
    sort(a,a+n);
    int b= accumulate(a, a+ k, 0);
    int c = accumulate(a + k, a + n, 0);
    int dif1 = abs(c - b);

    int d = accumulate(a+ (n- k), a+ n, 0);
    int e = accumulate(a, a + (n - k), 0);
    int dif2 = abs(e - d);

    cout << max(dif1, dif2);
    return 0;
}
