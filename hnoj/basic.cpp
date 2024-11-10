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
🔴vector
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main() { 
  int n; cin >> n; 
  vector<char> A(n); 
  for(int i = 0; i < n; i++) { 
    cin >> A[i]; 
  } 
  string tmp = "28tech";
  int len = tmp.length(); 
  int j = 0; 
  for(int i = 0; i < n; i += 2) { 
    if(A[i] == tmp[j]) { 
      j++;
    } 
    if(j == len) { 
      break; 
    } 
  }
  if(j == len) cout << "28TECH" << endl; 
  else cout << "HCET82" << endl; 
  return 0; 
}
