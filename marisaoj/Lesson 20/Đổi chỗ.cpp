#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000+5],q,b[10000],c[10000];
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=q;i++){
        cin>>b[i]>>c[i];
    }
    for(int i=q;i>=1;i--){
        swap(a[b[i]],a[c[i]]);
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}
//cách 2
#include <bits/stdc++.h>
using namespace std;
int main (){
  int n,q; cin >> n>>q;
  int b[n];
  for(int i=0;i<n;i++){
    cin >> b[i];
  }
  vector<pair<int,int>> v;
  for(int i = 0;i<q;i++){
    int x,y; cin >> x >> y;
    v.push_back({x,y});
  }
  
  for(int i = q-1;i>=0;i--){
    int x = v[i].first;
    int y =v[i].second;
    swap(b[x-1],b[y-1]);
  }
  
  for(int i=0;i<n;i++){
    cout << b[i] <<" ";
  }
  return 0;
}
