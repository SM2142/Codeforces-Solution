
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
    map<ll,ll>day,mp2,mp1;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    set<ll>st;
   cin>>n;
   ll ar[n];
   for(ll i=0;i<n;i++)
   {
       cin>>a;
       ar[i]=a;
       st.insert(a);
       u.push_back(a);
   }
   sort(u.begin(),u.end());
   if(u[0]==u[n-1])
   {
       cout<<-1<<endl;
       return;
   }
   if(ar[0]==ar[n-1])
   {
       c=0;
       for(ll i=0;i<n;i++)
       {
           if(ar[i]==ar[0])
           {
               c++;
           }
           else
           {
               v.push_back(c);
               c=0;
           }
       }
       if(c>0)
       {
           v.push_back(c);
       }
       sort(v.begin(),v.end());
       cout<<v[0]<<endl;
   }
   else
   {
       cout<<0<<endl;
   }


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
