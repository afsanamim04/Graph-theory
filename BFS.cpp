#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
//#define pb    'push_back'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void BFS(vector<int>G[],vector<bool>visited,int node)
{
    visited[node]=1;
    queue<int>qq;
    qq.push(node);
    while(!qq.empty())
    {
        node=qq.front();
        //print korbo
        qq.pop();
        for(auto x:G[node])
        {
            if(visited[x]==0)
            {
                qq.push(x);
                visited[x]=1;
            }
        }
    }
}

int main()
{
 ll n,e; cin>>n>>e;
  vector<int>G[n+5];
 ll a,b;
 while(e--)
 {
     cin>>a>>b;
     G[a].push_back(b);
     G[b].push_back(a);
 }
vector<bool>visited;
BFS(G,visited,1);
}
