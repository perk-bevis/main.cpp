Yêu cầu: Viết hàm void có tên update để cập nhật hai biến a và b. Hàm không trả về giá trị mà sẽ thay đổi giá trị của a và b trong bộ nhớ để:
a chứa tổng của hai số ban đầu (a' = a + b)
b chứa độ chênh lệch tuyệt đối giữa hai số ban đầu (b' = |a - b|)
Định dạng đầu vào: Chứa hai số nguyên a và b, cách nhau bởi dòng mới.
Ví dụ đầu vào:

4
5

Ví dụ đầu ra:

9
1
code🔴
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
