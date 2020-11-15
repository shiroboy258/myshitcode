#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll a)
{
    if(a < 2) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for(ll i = 3; i <= sqrt(a); i += 2)
    {
        if(a % i == 0) return false;
    }
    return true;
}
int main()
{
    freopen("SNT.INP","r",stdin);
    freopen("SNT.OUT","w",stdout);
    ll n, f;
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> f;
        ll a = f / 2, b = f / 2;
        if((a % 2 == 0 || b % 2 == 0) && (a != 2 && b != 2))
        {
            a -= 1;
            b += 1;
        }
        while(!check(a) || !check(b))
        {
            a -= 2;
            b += 2;
        }
        cout << a << " " << b << endl;
    }
}
