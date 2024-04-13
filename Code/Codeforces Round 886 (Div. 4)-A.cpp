
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
    ll n,m,a,p,q,r,c,b,x,y,d,k,z,g,sl,h;
    string s,s1,s2,s3;
    map<ll,ll>mp2,day,mp3;
    set<char>st;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    vector<pair<ll,ll>>vp;
    cin>>a>>b>>c;
    if((a+b)>=10||(b+c)>=10||(a+c)>=10)
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
