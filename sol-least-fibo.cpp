#include <bits/stdc++.h>
using namespace std;
int timfibo(int n)
{
    if (n<4) return n;
    int i=1 ,j=2;
    while (i+j<n)
    {
        int t=j;
        j=i+j;
        i=t;
    }
    return j;
}
int main()
{
    int n;
    cin>>n;
while (n>0)
    {
        int i =timfibo(n);
        cout<<i<<" ";
        n-=i;
    }
}
