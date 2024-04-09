
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
    cin>>a>>b>>c;
    if(a<b&& b<c&& a<c)
    {
        cout<<"STAIR"<<endl;
    }
    else if(a<b&& b>c)
    {
        cout<<"PEAK"<<endl;
    }
    else

    {
        cout<<"NONE"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
