#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> u;
vector<ll> arr;
vector<ll> s_arr;

vector<ll> lfibo(ll n)
{
    vector<ll> lvec;
    vector<ll> arr1;
    arr1.push_back(1);
    arr1.push_back(1);
    while(arr1.back() <= n) arr1.push_back(arr1[arr1.size() - 1] + arr1[arr1.size() - 2]);
    arr1.pop_back();
    ll res = arr1.back();
    lvec.push_back(arr1.back());
    arr1.pop_back();
    while(res < n)
    {
        while(res + arr1.back() > n)
        {
            arr1.pop_back();
        }
        lvec.push_back(arr1.back());
        res += arr1.back();
        arr1.pop_back();
    }
    return lvec;
}

void fibo(ll n)
{
    ll res = 1;
    arr.push_back(1);
    arr.push_back(1);
    while(res < n)
    {
        arr.push_back(arr[arr.size() - 1] + arr[arr.size() - 2]);
        res += arr.back();
        s_arr.push_back(arr.back());
    }
    set<ll> arrf(arr.begin(),arr.end());
    if(res == n) for(auto i : arrf) cout << i << " ";
    else
    {
        ll f = res - n;
        vector<ll> nf = lfibo(f);
        for(auto i : nf)
        {
            remove(s_arr.begin(),s_arr.end(),i);
        }
        set<ll> r_arr(s_arr.begin(),s_arr.end());
        if(accumulate(r_arr.begin(),r_arr.end(),0) < n) cout << 1 << " ";
        for(auto i : r_arr) cout << i << " ";
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
