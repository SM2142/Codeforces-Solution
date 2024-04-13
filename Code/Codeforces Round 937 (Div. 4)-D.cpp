
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m,a,b,c,p,q,r,flag;
    map<ll,ll>mp;
    set<ll>st;
    string s,t;
    vector<ll>u,v;
    ll op[16] = {10,11,101,111,1111,1011,1101,1001,11111,10111,10011,10001,11011,11001,11101,10101};
    cin>>n;
    for(ll i=15;i>=0;i--)
    {
        while(n%op[i]==0)
        {
            n=n/op[i];
        }
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
