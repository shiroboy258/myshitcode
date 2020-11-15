#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool nt(ll n)
{
    for(ll i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}

string snt(ll n)
{
    if(n == 1) return "2";
    else
    {
        ll dem = 1;
        ll i = 3;
        string s = "2";
        while(dem <= n)
        {
            if(nt(i)) s += to_string(i);
            i += 2;
            dem++;
        }
        return s;
    }
}

int main()
{
    freopen("TIMSO.INP","r",stdin);
    freopen("TIMSO.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << snt(n);
}
