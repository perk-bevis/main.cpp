//Cách 1:
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int male_room,girl_room;
    if(n%k == 0){
      male_room =n/k;
    }else{
      male_room =n/k+1;
    }
    if(m%k ==0){
      girl_room = m/k;
    }else{
      girl_room = m/k+1;
    }
    int sum = male_room +girl_room;
    cout << sum << endl;
    return 0;
}
//Cách 2
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int South = (n+k-1) / k;
    int girl =  (m+k-1)/k;
    int sum = South + girl;
    cout << sum<< endl;
    return 0;
}
