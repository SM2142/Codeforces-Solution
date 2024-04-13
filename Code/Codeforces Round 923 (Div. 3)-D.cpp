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
    ll br[n];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        br[i]=ar[i];

    }
    ll q;
    sort(br,br+n);
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        ll l,r;
        l=a;
        r=b;
        a--;
        b--;
        if(br[0]==br[n-1])
        {
            cout<<"-1 -1"<<endl;
        }
        else
        {

            if(ar[a]!=ar[b])
            {
                cout<<a+1<<" "<<b+1<<endl;
            }
            else
            {
                ll pos=0;
                while(a<b)
                {
                    if(ar[a]!=ar[a+1]&& a<=r-1)
                    {
                        cout<<a+1<<" "<<a+2<<endl;
                        pos=1;
                        break;
                    }
                    if(ar[b]!=ar[b-1]&& b>=l-1)
                    {
                        cout<<b<<" "<<b+1<<endl;
                        pos=1;
                        break;
                    }
                    a++;
                    b--;
                    if(a>b)
                        break;
                }
                if(pos==0)
                    cout<<"-1 -1"<<endl;
            }
        }
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
