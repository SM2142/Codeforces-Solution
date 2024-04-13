#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,m,p,q,r,a,b,c;
    vector<ll>u,v;
    map<ll,ll>mp;
    string s,t;
    cin>>n>>a>>b;
    for(ll i=0;i<n*n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    p=v[0];
    u.push_back(p);
    for(ll i=2;i<=n;i++)
    {
        r=p;
        r=r+b;

        u.push_back(r);
        p=r;
    }

    for(ll i=0;i<n;i++)
    {
        p=u[i];
        for(ll j=2;j<=(n);j++)
        {
            p=p+a;

            u.push_back(p);
        }
    }
    sort(u.begin(),u.end());
    if(u==v)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    u.clear();
    v.clear();
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
