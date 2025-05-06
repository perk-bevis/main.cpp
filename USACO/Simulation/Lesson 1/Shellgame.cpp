#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define max_dong 100
using namespace std;
// ham hoan vi
int hoanvi(int a[max_dong][3],int n,int start){
    int pos = start;
    int correct = 0;

    for (int i = 0; i < n; i++) {
        int x = a[i][0];
        int y = a[i][1];
        int guess = a[i][2];
        
        if (pos == x) pos = y;
        else if (pos == y) pos = x;
        
        if (pos == guess) correct++;
    }

    return correct;
}
int main() {
    ifstream fin("shell.in");
    ofstream fout("shell.out");
    
    int n;
    fin >> n;
    int a[max_dong][3];
    for(int i= 0;i<n;i++){
        for(int j=0;j<n;j++){
            fin >> a[i][j];
        }
    }

    int res = 0;
    for (int i = 1; i <= 3; i++) {
        res = max(res, hoanvi(a, n, i));
    }
    fout << res << endl;
    return 0;
}
