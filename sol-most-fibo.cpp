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
    set<int> s; s.insert(1); s.insert(2);
    int n, i=1,j=2, tong=3;
    cin>>n;
    while (tong<n)
    {
        int t=j;
        j=i+j;
        i=t;
        tong+=j;
        s.insert(j);
    }
    n=tong-n;
    while (n>0)
    {
        int i = timfibo(n);
        s.erase(i);
        n-=i;
    }
     for(int i:s) cout<<i<<" ";
}
