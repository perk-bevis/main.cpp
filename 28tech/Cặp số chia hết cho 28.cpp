#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  
    int A[N]; 
    int count[28] = {0}; 

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i] % 28]++;
    }

    long long result = 0;

    result += (long long)count[0] * (count[0] - 1) / 2;

    for (int i = 1; i <= 13; i++) {
        result += (long long)count[i] * count[28 - i];
    }
    
    result += (long long)count[14] * (count[14] - 1) / 2;

    cout << result << endl;

    return 0;
}
