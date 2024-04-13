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
    cin>>n>>c;
    ll ar[n];
    double aa,bb,cc,xx;
    aa=bb=cc=0.0;
    xx=0.0;
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        cc=cc+(ar[i]*ar[i]*1.0);
        bb=bb+(2*1.0*ar[i]*2);
        aa=aa+4*1.0;
    }
//    cout<<aa<<" "<<bb<<" "<<cc<<endl;
    cc=cc-c;
    xx=(-1.0*bb)+sqrt((bb*bb)-(4*aa*cc*1.0));
    xx=xx/(2*aa*1.0);
    p=xx;
    cout<<p<<endl;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
