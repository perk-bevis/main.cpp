#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,s=0,k=0;    
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){cin >> a[i];}
    sort(a+1,a+n+1);
    int b[n+1];
    for(int i=1;i<=n;i++){cin >> b[i];}
    sort(b+1,b+1+n);
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            s=1;
        }
    }
    if(s==0){
    cout << "YES";}
    else cout << "NO";
}

//cách 2
#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    int n; cin >>n;
    map<int,int> mpA,mpB;
    for(int i = 0;i<n;i++){
      int x;cin>>x;
      mpA[x++];
    }
    for(int i=0;i<n;i++){
      int x;cin>>x;
      mpB[x++];
    }
    if(mpA == mpB){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
    return 0;
}
