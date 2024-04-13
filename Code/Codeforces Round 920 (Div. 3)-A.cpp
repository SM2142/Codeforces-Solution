#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
vector<vector<ll>>graph;
vector<ll>vis;
/// number of leaf node in a tree
ll dfs(ll x, ll parent)
{
    ll cnt=0;
    for(auto child: graph[x])
    {
        if(child!=parent)
        {
            cnt+=dfs(child,x);
        }
    }
    if(cnt==0 && graph[x].size()==1)
    {
        cnt++;
    }
    vis[x]+=cnt;
    return cnt;
}

void solve()
{
    ll n,m,a,r,c,b,x,y,d,k,z,g,sl,h,type;
//    string s,s1,s2,s3;
    map<ll,ll>mp1,day,mp2;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    string s,t;
    vector<pair<ll,ll>>vp;
    for(ll i=1;i<=4;i++)
    {
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    a=abs(vp[0].second-vp[1].second);
    b=abs(vp[2].second-vp[3].second);
    cout<<a*b<<endl;




}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
