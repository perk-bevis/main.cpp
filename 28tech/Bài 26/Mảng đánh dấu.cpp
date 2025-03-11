#include <bits/stdc++.h>

using namespace std;

int mark(int a[], int n)
{
    int m[1000001] = {0};

    for (int i = 0; i < n; i++)
    {
        m[a[i]] = 1;
    }

    int c = 0;

    for (int i = 0; i < 1000001; i++)
    {
        if (m[i] == 1)
        {
            c++;
        }
    }

    return c;
}

int main()
{
    int n;
    cin >> n;
    int a[1000001];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << mark(a, n) << endl;

    return 0;
}
