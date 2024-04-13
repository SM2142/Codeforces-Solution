
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m,a,b,c,p,q,r,flag;
    map<ll,ll>mp;
    set<ll>st;
    string s,t;
    vector<string>u,v;
    cin>>n;
    c=0;
    for(ll i=1;i<=(2*n);i++)
    {
//        cout<<i<<" "<<c<<endl;
        if(c<2)
        {
            for(ll j=1;j<=n;j++)
            {
                if(j%2==1)
                v.push_back("##");
                else
                    v.push_back("..");
            }
            c++;
        }
        else if(c<4)
        {
            for(ll j=1;j<=n;j++)
            {
                if(j%2==0)
                v.push_back("##");
                else
                    v.push_back("..");
            }
            c++;
            if(c==4)
                c=0;
        }


    }

    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i];
        if((i+1)%n==0)
        {
            cout<<endl;
        }
    }
    v.clear();
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
