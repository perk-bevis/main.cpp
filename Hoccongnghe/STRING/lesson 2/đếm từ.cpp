#include <iostream>
#include <sstream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);  

    stringstream ss(s);
    string word;

    map<string, int> freq_dict;                
    unordered_map<string, int> freq_order;     
    vector<string> order;                     

    while (ss >> word) {
        freq_dict[word]++;
        if (freq_order[word] == 0) {
            order.push_back(word);
        }
        freq_order[word]++;
    }
    for (auto &p : freq_dict) {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;
    for (string &w : order) {
        cout << w << " " << freq_order[w] << endl;
    }

    return 0;
}
