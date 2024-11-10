#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    if(n == 0) return 0;
    int x = 0; int result = 0;
    string S = "28tech";
    char A[n];
    for(int i = 0; i < n ; i++){
        cin >> A[i];
        if(i % 2 == 0 && A[i] == S[x % 6]){
           result++;
           x++;
        }
    }
    return x / 6;
}
