#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int vis[10000],dis[10000];

void DFS(int node, int d)
{
    vis[node]=1;
    dis[node]=d;
    for(auto child:v[node])
        {
            if(vis[child]==0)
                DFS(child, d+1);
        }
}

int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int x; cin>>x;
    DFS(x,0);

    for(int i=1; i<=n; i++)
    {
        cout<<x<<"->"<<i<<"="<<dis[i]<<endl;
    }
}
