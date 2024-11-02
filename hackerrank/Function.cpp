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
