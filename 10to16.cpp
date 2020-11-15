#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n;
    cin >> n;
    stack<char> s;
    while(n != 0)
    {
        s.push(arr[n % 16]);
        n /= 16;
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
