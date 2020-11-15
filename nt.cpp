#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool euclid(ll n)
{
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return (n>1);
}

int main()
{
    //freopen("NT.INP","r",stdin);
    //freopen("NT.OUT","w",stdout);
    ll n;
    cin >> n;
    ll a = 0;
    for(ll i = 2; i < n; i++)
    {
        if(euclid(i))
        {
            a += i;
            cout << i << " ";
        }
    }
    cout << endl << a;
}
/*
#include <bits/stdc++.h>
using namespace std;
bool kt(long long n)
{
    if(n<2)
    {
        return false;
    }
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;

}
int main()
{
    //freopen("NT.INP","r",stdin);
    //freopen("NT.OUT","w",stdout);
	long long n,tong=0;
	cin>>n;
	for (long long i=2;i<n;i++)
	{
      if (kt(i))
       {
           cout<<i<<" ";
           tong=tong+i;

       }
	}
	cout<<'\n';
	cout<<tong;
}*/
