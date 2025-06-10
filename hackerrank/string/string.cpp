#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> v;
    stringstream ss(str);
    int number;
    char ch;

    while (ss >> number) {
        v.push_back(number);
        ss >> ch; 
    }

    return v;
}

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
