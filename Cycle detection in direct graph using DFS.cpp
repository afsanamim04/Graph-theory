#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define nl   endl
#define pb   push_back
vector<ll>v[1000000];
ll vis[10000];

bool DFS (int node)
{
    vis[node]=1;
    for(auto child : v[node])
    {
        if(vis [child] == 0)
        {
            if( DFS (child) == true ) return true;
        }
        else
        {
            if( vis [child]==1) return true;
        }
    }
    vis[node]=2;
    return false;
}

int main()
{
    ll n,e;
    cin>> n>>e;
    while( e--)
    {
        ll x,y;
        cin>> x>> y;
        v[x] . pb(y);
    }
    bool ans = DFS(1);
    if ( ans == true ) cout<< "Cycle" <<nl;
    else
        cout<< "Not Cycle" <<nl;
}
