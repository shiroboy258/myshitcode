#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("SELECT.INP","r",stdin);
    freopen("SELECT.OUT","w",stdout);
	ll n;
	cin >> n;
	map<ll,ll> arr;
 	for(ll i = 0; i < n; i++)
	{
		ll f;
		cin >> f;
		arr[f]++;
	}
	ll gt = 0;
	for(auto it : arr)
	{
		if(it.second > n / 2) gt = it.first;
	}
	cout << gt;
}
