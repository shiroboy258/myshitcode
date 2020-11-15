#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<char> s;
    while(n != 0)
    {
        s.push(n % 2 + '0');
        n /= 2;
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
