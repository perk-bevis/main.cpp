
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

