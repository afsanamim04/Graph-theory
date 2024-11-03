// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
const int mx = 1002;
int adjMat[mx][mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    for( int i = 0; i < n; ++i ){
        for( int j = 0; j < m; ++j ){
            cin >> adjMat[i][j];
            // scanf(" %c", adj[i]); string er khetre enter take char hisebe avoid korar jonno
        }
    }

    cout << nl;

    for( int i = 0; i < n; ++i ){
        for( int j = 0; j < m; ++j ){
            cout << adjMat[i][j];
        }
        cout << endl;
    }
    return 0;
}



