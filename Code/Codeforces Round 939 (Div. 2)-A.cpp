
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
    ll n,m,a,r,c,b,x,y,d,k,z,g,sl,h,type,f;
    string s,s1,s2,s3;
    map<ll,ll>day,mp2,mp1,mp;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    set<ll>st;
    cin>>k>>a;
    ll ar[k];
    for(ll i=0;i<k;i++)
    {
        cin>>ar[i];
    }
    while(a--)
    {
        cin>>b;
        if(b<ar[0])
        {
            v.push_back(b);
        }
        else
        {
            v.push_back(ar[0]-1);
        }
    }
    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
