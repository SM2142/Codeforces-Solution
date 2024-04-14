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
    cin>>n;
    ll sum=0;
    ll   p=1;
    x=1;
    for(ll i=1;i<=n;i++)
    {
        sum=sum+i*x;
        x=x+2;
    }
    x=(n*(n+1))/2;
    for(ll i=1;i<=n;i++)
    {
        s1=to_string(i);
        s+=s1;
        s+=' ';
        s1.clear();
    }

    cout<<sum<<" "<<2*n<<endl;
    char ch=n+'0';
    p=x;
    c=0;
    b=n;
    for(ll i=n;i>=1;i--)
    {
        cout<<1<<" "<<i<<" "<<s<<endl;
        cout<<2<<" "<<i<<" "<<s<<endl;
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
