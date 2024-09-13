#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define nl   endl
#define pb   push_back
vector<ll>v[1000000];
ll vis[10000];

bool DFS(int node , int par )
{
    vis [node] = 1;
    for( auto child : v [node] )
    {
        if( vis[child] == 0 )
        {
            if( DFS (child , node) == true )
                return true;
        }
        else
        {
            if( child != par )
                return true;
        }
    }
    return false;
}
int main()
{
    ll n , e ;
    cin >> n >> e;
    while ( e-- )
    {
        ll x , y;
        cin >>x >>y;
        v [x] . pb ( y );
        v [y] . pb ( x );
    }
    bool ans = DFS ( 1 , -1);
    if ( ans == true )
        cout << "Cycle" <<nl;
    else
        cout << "Not Cycle" <<nl ;

}
