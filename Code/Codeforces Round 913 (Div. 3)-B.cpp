#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    char ch;
    ll n,x;
    cin>>ch>>x;
    for(char i='a';i<='h';i++)
    {
        if(i!=ch)
        {

        cout<<i<<x<<endl;
        }
    }
    for(ll i=1;i<x;i++)
    {
        cout<<ch<<i<<endl;
    }
    for(ll i=x+1;i<=8;i++)
    {
        cout<<ch<<i<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}
