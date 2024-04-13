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
//    string s,s1,s2,s3;
    map<ll,ll>day,mp2,mp1;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    string s,t;
    set<ll>st;
    cin>>n;
    cin>>s;
    a=b=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            a=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(s[i]=='B')
        {
            b=i;
            break;
        }
    }
    cout<<b-a+1<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
