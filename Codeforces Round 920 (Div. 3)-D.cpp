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
    map<ll,ll>mp1,day,mp2;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    string s,t;
    cin>>n>>m;
    ll ar[n];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    ll br[m];
    for(ll i=0; i<m; i++)
    {
        cin>>br[i];
    }
    sort(ar,ar+n);
    sort(br,br+m);
    ll i=0;
    ll j=n-1;
    ll p=0;
    ll q=m-1;
    ll sum=0;
    while(i<=j&&p<=q)
    {
        a=abs(ar[i]-br[q]);
        b=abs(ar[j]-br[p]);
        if(a>b)
        {
            sum+=a;
            i++;
            q--;
        }
        else
        {
            sum+=b;
            j--;
            p++;
        }
    }
    cout<<sum<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
