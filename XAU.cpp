#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    freopen("XAU.INP","r",stdin);
    freopen("XAU.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1;
    ll f = 0;
    cin >> s1 >> s;
    map<char,ll> a;
    map<char,ll> a1;
    for(auto i : s1) a[i]++;
    for(ll i = 0; i < s.size(); i++)
    {
        for(ll j = 1; i + j <= s.size(); j++)
        {
            a1.clear();
            string t = s.substr(i,j);
            for(auto k : t) a1[k]++;
            if(a1 == a) f++;
        }
    }
    cout << f;
}
