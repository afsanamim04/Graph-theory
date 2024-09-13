#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int vis[10000];

void DFS(int node)
{
    vis[node]=1;
    for(auto child: v[node])
    {
        if(vis[child]==0)
            DFS(child);
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
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            cnt++;
            DFS(i);
        }
    }
    cout<<cnt<<endl;
}
