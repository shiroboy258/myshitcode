#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll tong(ll a)
{
    ll res = 0;
    for(ll i = 2; i <= a / 2; i++)
    {
        if(a % i == 0) res += i;
    }
    return res;
}

int main()
{
    freopen("ANHEM.INP","r",stdin);
    freopen("ANHEM.OUT","w",stdout);
    ll a,b;
    cin >> a >> b;
    if(tong(a) == tong(b)) cout << "YES";
    else cout << "NO";
}
