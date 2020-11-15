#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("TC.INP","r",stdin);
    //freopen("TC.OUT","w",stdout);
    string s;
    getline(cin,s);
    long long f = 0;
    for(long long i = 0; i < s.size(); i++)
    {
        f += s[i] - '0';
    }
    if(f % 2 == 0) cout << "Yes";
    else cout << "No";
}
