include <iostream>
using namespace std;

int main() {
int N; cin >> N;
int A[N];
for (int i = 0; i < N; ++i) {
    cin >> A[i];
}

for (int i = 1; i < N - 1; ++i) {
    if (A[i] < A[i - 1] && A[i] < A[i + 1]) {
        cout << A[i] << " ";
    }
}

return 0;
}
