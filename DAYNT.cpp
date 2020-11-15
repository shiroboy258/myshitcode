#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

bool nt(ll n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(ll i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    freopen("DAYNT.INP","r",stdin);
    freopen("DAYNT.OUT","w",stdout);
    ll n, f;
    cin >> n;
    set<ll> arr;
    for(ll i = 0; i < n; i++)
    {
        cin >> f;
        if(nt(f)) arr.insert(f);
    }
    for(auto it : arr) cout << it << " ";
}
