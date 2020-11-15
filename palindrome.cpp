#include<bits/stdc++.h>
using namespace std;
#define ll long long
string tostring(ll n)
{
    ostringstream a;
    a << n;
    return a.str();
}
int main()
{
    //freopen("palindrome.inp","r",stdin);
    //freopen("palindrome.out","w",stdout);
    ll a,b;
    cin >> a >> b;
    if(b - a >= 10)
    {
        ll d = 0;
        for(ll i = a; i < 9 && i <= b; i++) d++;
        string uk = tostring(a);
        if(uk[0] == uk[uk.size() - 1])
        {
            a += 1;
            d++;
        }
        d += (max(a,b) - min(a,b))/10;
        cout << d;
    }
    else
    {
        ll c = 0;
        for(;a <= b; a++)
        {
            string temp = tostring(a);
            if(temp[0] == temp[temp.size() - 1])
            {
                c++;
            }
        }
    cout << c;
    }
}
