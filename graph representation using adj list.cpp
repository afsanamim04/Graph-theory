#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
    vector<int>v[100000];

int main()
{

    int n,m;
    cin>>n>>m;
    int x,y;
while(m--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
    {
        cout<<i;
        for(int j=0; j<v[i].size(); j++)
           cout<<"->"<<v[i][j];
             cout<<endl;
    }
}
