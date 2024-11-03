The first line of the input contains n ,where n is the number of integers.The next line contains n space-separated integers.

Constraints

1 <= n <= 1000
1 <= a[i] <= 10000

, where A[i] is the i^th integer in the array.

Output Format

Print the n integers of the array in the reverse order, space-separated on a single line.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    long long a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n / 2; i++) {
        long long temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
