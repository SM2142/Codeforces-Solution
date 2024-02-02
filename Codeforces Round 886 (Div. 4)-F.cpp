
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
    map<ll,ll>mp1,day,mp;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    vector<pair<ll,ll>>vp;
   ll mx=0;
   cin>>n;
   for(ll i=0;i<n;i++)
   {
       cin>>x;
       if(x<=n)
       {
           if(mp[x]==0)
           {

           v.push_back(x);
           }
       }
       mp[x]++;
   }
   sort(v.begin(),v.end());
   for(ll i=0;i<v.size();i++)
   {
       x=v[i];
       c=0;
//       cout<<"v[i] = "<<v[i]<<endl;
       while(x<=n)
       {
          mp1[x]=mp[v[i]]+mp1[x];
//           cout<<mp1[x]<<endl;
           x=x+v[i];
       }

   }
   for(auto it=mp1.begin();it!=mp1.end();it++)
   {

       mx=max(mx,it->second);
   }
   cout<<mx<<endl;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
