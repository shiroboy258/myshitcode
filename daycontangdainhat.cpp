#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,res = 0;
    cin >> n;
    ll a[n], l[n];
    l[0] = 1;
    for(ll i = 0; i < n; i++) a[i] = rand() % 100 + 1;
    for(ll i = 1; i < n; i++)
    {
        ll lmax = 0;
        for(ll j = 0; j < i; j++)
        {
            if(a[i] > a[j]) lmax = max(lmax,l[j]);
        }
        res = max(res,l[i] = lmax + 1);
    }
    for(auto i : a) cout << i << " ";
    cout << endl;
    for(auto i : l) cout << i << " ";
    cout << endl;
    cout << res;
}
