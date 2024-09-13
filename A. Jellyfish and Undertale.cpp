#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    endl
#define pb    push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v;
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            ll j;
            cin>>j;
            if((b+j)>a)
            {
                v.push_back(a);
            }
            else
                v.push_back(j);

        }
       // for(auto it:v) cout<<it<<' ';
        ll sum1=0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]!=v[i+1])
            {
                sum1=sum1+(b+v[i]);
                sum1=min(sum1,a);
                sum=sum+(sum1-1);
                sum1=0;
            }
            else
            {
                sum1=b+v[i];
            }

        }
        cout<<sum+1<<nl;
    }

}
