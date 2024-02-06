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
//    set<ll>st;
    cin>>n>>m>>k;
    ll ar[n];
    ll br[m];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        mp1[ar[i]]=1;
    }
    for(ll i=0; i<m; i++)

    {
        cin>>br[i];
        mp2[br[i]]=1;
    }
    a=b=0;
    for(ll i=1;i<=k;i++)
    {
        if(mp1[i]==1&& mp2[i]==0)
        {
            a++;
        }
        else if(mp1[i]==0&& mp2[i]==1)
        {
            b++;
        }
    }
//    cout<<a<<" "<<b<<endl;
    if(a<=k/2&& b<=k/2)
    {
        c=0;
        for(ll i=1;i<=k;i++)
        {
            if(mp1[i]==1&& mp2[i]==1)
            {
                c++;
            }
        }
        if(a<(k/2))
        {
            x=(k/2)-a;
            if(c>=x)
            {
                c=c-x;
                a=k/2;
            }
        }
        if(b<(k/2))
        {
            x=(k/2)-b;
            if(c>=x)
            {
                c=c-x;
                b=k/2;
            }
        }
        if(a==k/2&& b==k/2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
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
