#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

bool nt(ll n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
    return true;
}

vector<ll> sang(ll n)
{
    vector<ll> res;
    bool arr[n + 1];
    memset(arr,true,n);
    arr[0] = false;
    arr[1] = false;
    for(ll i = 2; i * i <= n; i++)
    {
        for(ll j = i * i; j <= n; j += i) arr[j] = false;
    }
    for(ll i = 0; i < n +1; i++) if(arr[i]){res.push_back(i);}
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> give = sang(100);
    for(ll i = 0; i < give.size() - 1; i++)
    {
        if(abs(give[i] - give[i + 1]) == 2) cout << give[i] << " " << give[i + 1] << " - ";
    }
}
