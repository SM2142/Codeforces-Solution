#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,m,p,q,r,a,b,c,k;
    vector<ll>u,v;
    map<ll,ll>mp;
    string s,t;
    cin>>n>>k;
    ll ar[n];
    p=0;
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        p=p+ar[i];
    }
   c=0;
   a=(k+1)/2;
   b=k/2;
   if(p==k)
   {
       cout<<n<<endl;
       return;
   }
   for(ll i=0;i<n;i++)
   {
       if(ar[i]<=a)
       {
           a=a-ar[i];
           c++;
       }
       else break;
   }
   for(ll i=n-1;i>=0;i--)
   {
       if(ar[i]<=b)
       {
           b=b-ar[i];
           c++;
       }
       else break;
   }
   cout<<c<<endl;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
