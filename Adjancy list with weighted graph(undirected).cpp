// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
const int mx = 1e5+123;
vector<pair<int,int> >adj[mx];

void sol()
{
  int n,m;
  cin >> n >> m;

  for( int i = 1; i <= m; ++i ){
    int u,v,w;
    cin >> u >> v >> w;
    adj[u].pb({v,w});
    adj[v].pb({u,w});
  }

  for( int i = 1; i <= n; ++i ){
      cout << "Adjacency List of " << i <<": ";
      for( auto u : adj[i] ){
        cout << "node = " << u.first << " weight : " << u.second << "\t";
      }
      cout << nl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

    return 0;
}



