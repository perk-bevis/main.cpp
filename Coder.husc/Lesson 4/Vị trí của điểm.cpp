#include <iostream>
#include <cmath> 
using namespace std;

const double number = 1e-4; 

int main() {
    double x, y;
    cin >> x >> y;

    if (fabs(x) < number && fabs(y) < number) {
        cout << "Origem" << endl;
    }
    
    else if (fabs(x) < number) {
        cout << "Eixo Y" << endl;
    }
    else if (fabs(y) < number) {
        cout << "Eixo X" << endl;
    }
    else if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else {
        cout << "Q4" << endl;
    }
    return 0;
}
