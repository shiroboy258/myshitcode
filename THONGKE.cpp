#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    freopen("THONGKE.INP","r",stdin);
    freopen("THONGKE.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, f;
    cin >> n;
    map<ll,ll> arr;
    for(ll i = 0; i < n; i++)
    {
        cin >> f;
        arr[f]++;
    }
    for(auto it : arr) cout << it.first << " " << it.second << endl;
}
