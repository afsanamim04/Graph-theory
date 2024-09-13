#include<bits/stdc++.h>
#define nl   endl
#define ll   long long int
#define pb   push_back
using namespace std;
vector<ll>v[100000];
int vis[1000],col[1000];

bool DFS(int node, int c)
{
    vis[node]=1;
    col[node]=c;

    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            if(DFS(child,c^1)==false) return false;
        }

        else
        {
            if(col[node]==col[child]) return false;
        }
    }
    return true;
}

int main()
{
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bool ans = DFS(1,1);
    if(ans==true)
        cout<<"The graph is bipartite"<<nl;
    else
        cout<<"The graph is not bipartite"<<nl;
}

