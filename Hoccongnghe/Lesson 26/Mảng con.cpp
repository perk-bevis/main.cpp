#include <iostream>
#define Max 1000001
using namespace std;

int main()
{
    int n,m; cin >>n >> m;
    int a[Max];
    int b[Max];
    for(int i= 0;i<n;i++){
      cin >> a[i];
    }
    for(int i= 0;i<m;i++){
      cin >> b[i];
    }
    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] == b[j]) j++;
    }

    if (j == m) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
