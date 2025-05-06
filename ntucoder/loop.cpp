
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
int N, a[100], b[100], g[100];

int solution (int i) {
    int location = i;
    int guesses = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == location) location = b[i];
        if (b[i]== location) location = a[i];
        if (g[i] == location) guesses++;
    }
    return guesses;
}

int main() {
    ifstream fin ("shell.in");
    ofstream fout ("shell.out");
    fin >> N;
    int highest = 0;
    for (int i = 0; i < N; i++) {
        fin >> a[i] >> b[i] >> g[i];
    }
    for (int i = 0; i < 4; i++) {
        highest = max(highest, solution(i));
    }
    fout << highest << endl;
    return 0;
}
