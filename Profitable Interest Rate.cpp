// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol(){
   ll n,m;
   cin >> n >> m;
   if( n >= m )
    cout << n << nl;
   else if( m - n > 0 ){
     ll ans = n - ( m - n) ;
     cout << max( ans , 1LL*0 ) << nl;
   }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        sol();
    }
    return 0;
}



