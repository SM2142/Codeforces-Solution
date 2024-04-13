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
    if(n<2)
    {
        cout<<a<<endl;
        return;
    }
    if(a*2<=b)
    {
        cout<<a*n<<endl;
    }
    else
    {
        p=b*(n/2);
        q=b/2;
        if(n%2)
        {
            p=p+a;
        }
        cout<<p<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
