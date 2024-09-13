#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int adj(int ar[5][5], int b, int c)
{
    for(ll i=0; i<5; i++)
    {
        for(ll j=0; i<5; i++)
        {
            ar[b][c]=1;
            ar[c][b]=1;
        }
    }
}
int main()
{
    int ar[5][5],e,n;
    cin>>n>>e;
    ll x,y;
    for(ll i=0; i<5; i++)
    {
        for(ll j=0; j<5; j++)
        {
           ar[i][j]=0;
        }
    }
    for(ll i=0; i<e; i++)
    {
        cin>>x>>y;
        adj(ar,x,y);
    }
    for(ll i=0; i<5; i++)
    {
        for(ll j=0; j<5; j++)
        {
            cout<<ar[i][j]<<' ';
        }
        cout<<nl;
    }

}
