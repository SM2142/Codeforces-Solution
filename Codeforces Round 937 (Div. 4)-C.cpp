
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,m,a,b,c,p,q,r,flag;
    map<ll,ll>mp;
    set<ll>st;
    string s,t;
    vector<ll>u,v;
    cin>>s;
    a=s[0]-'0';
    a=a*10;
    a=a+s[1]-'0';
    b=s[3]-'0';
    b=b*10;
    b=b+s[4]-'0';
    if(a==0)
    {
        a=12;
        cout<<a<<":";
        if(b<10)
            cout<<"0";
        cout<<b<<" AM"<<endl;
    }
    else if(a==12)
    {

        cout<<a<<":";
        if(b<10)
            cout<<"0";
        cout<<b<<" PM"<<endl;

    }
    else if(a>12)
    {
        a=a-12;
        if(a<10)
            cout<<"0";
        cout<<a<<":";
        if(b<10)
            cout<<"0";
        cout<<b<<" PM"<<endl;
    }
    else
    {
        if(a<10)
            cout<<"0";
        cout<<a<<":";
        if(b<10)
            cout<<"0";
        cout<<b<<" AM"<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
