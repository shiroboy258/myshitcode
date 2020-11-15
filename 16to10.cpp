#include<bits/stdc++.h>
using namespace std;

int hex(char n)
{
    if(n >= '0' && n <= '9') return n - '0';
    switch (n)
    {
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
    }
}

int main()
{
    string s;
    cin >> s;
    int res = 0;
    for(int i = s.size() - 1; i >= 0; i--) res += hex(s[i]) * pow(16,s.size() - i - 1);
    cout << res;
}
