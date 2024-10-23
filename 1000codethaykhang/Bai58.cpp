Viết chương trình đếm số lượng chữ số của một số nguyên 
n nhập từ bàn phím.

Input
Số nguyên n

Giới hạn
|n| <=10^1000
Output
Số lượng chữ số của số n
#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    int size_of_N = n.size();
    if(static_cast<char> (n[0]) == '-'){
        --size_of_N;
    }
    cout<< size_of_N;
}

