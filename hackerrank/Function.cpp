Input will contain four integers -a,b,c,d  , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input

3
4
6
5
Sample Output

6
code:
#include <iostream>
using namespace std;

int findMax(int a, int b, int c, int d) {
    return max(max(a,b),max(c,d));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c>> d;
    int maxNumber = findMax(a, b, c, d);

    cout << maxNumber << endl;

    return 0;
}
