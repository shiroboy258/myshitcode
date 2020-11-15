#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr;

void fibo(ll n)
{
    arr.push_back(1);
    arr.push_back(1);
    while(arr.back() <= n) arr.push_back(arr[arr.size() - 1] + arr[arr.size() - 2]);
    arr.pop_back();
    ll res = arr.back();
    cout << arr.back() << " ";
    arr.pop_back();
    while(res < n)
    {
        while(res + arr.back() > n)
        {
            arr.pop_back();
        }
        cout << arr.back() << " ";
        res += arr.back();
        arr.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    fibo(n);
}
