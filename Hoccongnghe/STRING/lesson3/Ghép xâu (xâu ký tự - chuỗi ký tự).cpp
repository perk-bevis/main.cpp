#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const string &a, const string &b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), compare);

    string result = "";
    for (const string &word : words) {
        result += word;
    }

    cout << result << endl;
    return 0;
}
