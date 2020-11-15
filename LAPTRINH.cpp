#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    freopen("LAPTRINH.INP","r",stdin);
    freopen("LAPTRINH.OUT","w",stdout);
    ll n, f, res = 0;
    cin >> n;
    map<ll,ll> arr;
    for(ll i = 0; i < n; i++)
    {
        cin >> f;
        arr[f]++;
    }
    cout << (*arr.begin()).first << endl << (*arr.begin()).second;
}
