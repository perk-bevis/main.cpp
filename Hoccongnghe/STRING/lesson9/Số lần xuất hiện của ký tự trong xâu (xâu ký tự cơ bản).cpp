#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};     
    bool appeared[256] = {0}; 

    
    for (char c : s) {
        freq[(unsigned char)c]++;
    }

    for (char c : s) {
        if (!appeared[(unsigned char)c]) {
            cout << c << " " << freq[(unsigned char)c] << "\n";
            appeared[(unsigned char)c] = true;
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s;
    getline(cin, s);
    map<char, int> mp;
    for (size_t i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
    for (size_t i = 0; i < s.size(); i++){
        if (mp[s[i]] != 0){
            cout << s[i] << " " << mp[s[i]] << endl;
            mp[s[i]] = 0;
        }
    }
    return 0;
}

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S; 

    unordered_map<char, int> count;  
    vector<char> order;         
    for (char ch : S) {
        if (count[ch] == 0) {   
            order.push_back(ch);  
        }
        count[ch]++; 
    }

    for (char ch : order) {
        cout << ch << " " << count[ch] << endl;
    }

    return 0;
}
