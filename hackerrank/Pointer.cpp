#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b) {
    int sum = *a + *b;
    int fell = abs(*a - *b);
    *a = sum;
    *b = fell;
}

int main() {
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
