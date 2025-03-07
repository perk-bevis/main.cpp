#include <iostream>
#define Max 1000
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[Max];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x, y;
    cin >> x >> y;
    
    if (x == y) {
        cout << "0" << endl;
        return 0;
    }
    //chỉ số trong mảng a
    x = x - 1;
    y = y - 1;
    // tính chu vi
    int perimeter = 0;
    for (int i = 0; i < n; i++) {
        perimeter += a[i];
    }
    // tính khoảng cách theo chiều xuôi 
    int fr = 0;
    int i = x;
    while (i != y) {
        fr += a[i];
        i = (i + 1) % n; 
    }
    // tính khoảng cách theo chiều ngược
    int fl = perimeter - fr;
    cout << min(fr, fl) << endl;

    return 0;
}
cách 2
#include <stdio.h>
 
int main(void) {
    int n; 
    cin >> n; // 3
    int a[n]; // 1 2 2
    //tính tổng các phần tử trong mảng
    int total = 0; // total = 5
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];  
    }
    
    int x, y;
    cin>> x>>y;
    
   
    if (x == y) {
        cout <<"0";
        return 0;
    }
    
   //hoán vị
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    //tính tổng
    //x-1 = 1-1 =0
    //y-1 = 3-1 =2
    //i= 0 /0<2 /distance1 = 0
    //i= 1 /1<2/ distance1 = 2
    //i=2 /2<2 (sai)(loại)
    int distance1 = 0;
 
    for (int i = x - 1; i < y - 1; i++) {
        distance1 += a[i];
    }
    
    //distance2= 5 -2 =3
    int distance2 = total - distance1;
    
    //result = (2<3) => result = 2
    int result = (distance1 < distance2) ? distance1 : distance2;
    cout << result;
    
    return 0;
}
cách 3
#include <bits/stdc++.h>
using namespace std;
 
int t1(int a[], int n, int x, int y){
    int t=0;
    for(int i=x; i<y; i++){
        t+=a[i];
    }
    return t;
}
 
int t2(int a[], int n, int x, int y){
    int t=0, i; 
    for( i=y; i<=n; i++){
        t+=a[i];
    }
    for( i=1; i<x; i++){
        t+=a[i];
    }
    return t;
}
 
int main(){
    int n; cin >> n;
    int a[n];
    int i;
    for(i=1; i<=n; i++){
        cin >> a[i];
    }
    int x, y; cin >> x >> y;
    int temp;
    if(x>y){
        temp=x;x=y;y=temp;
    }
 
    // cout << x << " " << y << endl;
    // cout << t1(a,n,x,y) << " " << t2(a,n,x,y) << endl;
 
    if( t1(a,n,x,y) < t2(a,n,x,y) ) cout << t1(a,n,x,y);
    else cout << t2(a,n,x,y);
    return 0;
}
