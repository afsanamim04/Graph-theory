
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
#define sf(n) scanf("%d", &n)
#define pf(n) printf("%d",n)

int main()
{
ll n;
    cin>>n;
    vector<ll>v,v1,v2,v3;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.pb(j);
    }
    sort(v.begin(),v.end());
    for(auto it:v) cout<<it<<' ';



    cout<<cnt<<' '<<flg<<' '<<l<<nl;
    for(auto it:v1) cout<<it<<' ';
    cout<<nl;
    for(auto it:v2) cout<<it<<' ';
    cout<<nl;
    for(auto it:v3) cout<<it<<' ';
    cout<<nl;
}
