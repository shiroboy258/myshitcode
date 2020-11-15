#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    //freopen("XOASO.INP","r",stdin);
    //freopen("XOASO.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, f, res = 0, _a = 0, _b = 0;
    cin >> n;
    vector<ll> arr;
    for(ll i = 0; i < n; i++)
    {
        cin >> f;
        arr.push_back(f);
    }
    for(ll i = 0; i < n - 1; i++)
    {
        for(ll j = i + 1; j < n; j++)
        {
            swap(_a,arr[i]);
            swap(_b,arr[j]);
            if(accumulate(arr.begin(),arr.end(),0) % 2 == 0) res++;
            swap(_a,arr[i]);
            swap(_b,arr[j]);
        }
    }
    cout << res;
}

