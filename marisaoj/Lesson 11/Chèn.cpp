#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> A;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        A.push_back(x);
    }
    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        A.insert(A.begin() + x-1, y);
        for (ll j = 0; j < A.size(); j++)
        {
            cout << A[j] << " ";
        }
        cout << endl;
    }
}
