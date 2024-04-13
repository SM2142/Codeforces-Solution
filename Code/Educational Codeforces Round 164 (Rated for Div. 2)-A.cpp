
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

    cin>>n>>a>>b;
    ll ar[n+10];
    for(ll i=1;i<=n;i++)
    {
        ar[i]=0;
    }
ll    p=1;
    for(ll i=1;i<=n;i++)
    {
        ar[i]=p;
        p++;
        if(p>a)
        {
            p=1;
        }
    }
    p=0;
//    for(ll i=1;i<=n;i++)
//    {
//        cout<<ar[i]<<" ";
//    }
//    cout<<endl;
    for(ll i=2;i<=n;i++)
    {
        if(ar[i]!=ar[i-1])
        {
            ar[i]=ar[i-1];
            p++;
        }
        if(p==b)
            break;
    }

    c=0;
    for(ll i=2;i<=n;i++)
    {
        if(ar[i]==ar[i-1]){
            c++;
        }
    }
//    for(ll i=1;i<=n;i++)
//    {
//        cout<<ar[i]<<" ";
//    }
//    cout<<endl;
//    cout<<c<<endl;
    if(c+1==n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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
