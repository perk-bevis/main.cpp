Input Format

Bạn sẽ được cung cấp hai số nguyên dương, a và b (a ≤ b), tách biệt bởi một dòng mới.

Output Format

Với mỗi số nguyên n trong khoảng đóng [a, b]:

Nếu 1 ≤ n ≤ 9, in ra dạng chữ tiếng Anh của nó bằng chữ thường. Ví dụ: "one" cho 1, "two" cho 2, và cứ thế tiếp tục.

Nếu n > 9 và là số chẵn, in "even".

Nếu n > 9 và là số lẻ, in "odd".


Ghi chú: [a, b] là tập hợp các số nguyên x thỏa mãn a ≤ x ≤ b.

Sample Input

8
11

Sample Output

eight
nine
even
odd
code:
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int n = a; n <= b; ++n) {
        if (n >= 1 && n <= 9) {
            switch (n) {
                case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        } else {
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
