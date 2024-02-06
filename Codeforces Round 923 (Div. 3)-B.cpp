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
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    char br[n];
    char ch='a';
    map<char,ll>mp;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            br[i]=ch;
            mp[ch]++;
            ch++;

        }
    }
    for(ll i=0;i<n;i++)
    {
        if(ar[i]!=0)
        {
            for( ch='a';ch<='z';ch++)
            {
                if(mp[ch]==ar[i])
                {
                    br[i]=ch;
                    mp[ch]++;
                    break;
                }
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<br[i];
    }
    cout<<endl;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
