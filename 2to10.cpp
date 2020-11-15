#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int res = 0;
    for(int i = s.size() - 1; i >= 0; i--) res += (s[i] - '0') * pow(2,s.size() - i - 1);
    cout << res;
}
