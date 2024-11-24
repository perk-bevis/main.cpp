#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int offset = n;  
    int prefixSum = 0;
    int result = 0;
    int prefixSumCount[2 * N + 1] = {0};
    prefixSumCount[offset] = 1; 

    for (int i = 0; i < a; i++) {
        if (a[i] % 2 == 0) {
            prefixSum += 1;
        } else {
            prefixSum -= 1;
        }

        result += prefixSumCount[prefixSum + offset];
        prefixSumCount[prefixSum + offset]++;
    }

    cout << result << endl;
    return 0;
}
