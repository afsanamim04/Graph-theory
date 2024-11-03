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
vector<int> adj[mx];

void sol()
{
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  for(int i = 1; i <= n; ++i) { // Start from 1
    cout << "adjacent list of " << i << ": ";
    for(auto u : adj[i]) {
      cout << u << ' ';
    }
    cout << nl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    {
        sol();
    }
    return 0;
}
