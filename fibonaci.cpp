#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10001

int main()
{
    //freopen("FIBONACI.INP","r",stdin);
    //freopen("FIBONACI.OUT","w",stdout);
    vector<ll> arr;
    arr.push_back(1);
    arr.push_back(1);
    for(ll i = 2; i < MAX; i++) arr.push_back(arr[i - 1] + arr[i - 2]);
    ll n, f = 0;
    while(cin >> n)
    {
        if(find(arr.begin(),arr.end(),n) != arr.end())
        {
            f++;
            cout << n << " ";
        }
    }
    cout << endl << f;
}
