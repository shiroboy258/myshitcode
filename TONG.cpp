#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    freopen("TONG.INP","r",stdin);
    freopen("TONG.OUT","w",stdout);
    ll n, f;
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> f;
        cout << f*(f + 1) / 2 << endl;
    }
}
