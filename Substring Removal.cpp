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
  ll n;
  cin >> n;
  string s;
  cin >> s;
  ll cnt1 = 1, cnt2 = 1;
  for( int i = 0; i < n-1; ++i ){
    if( s[i] == s[i+1] ){
        cnt1++;
    }
    else break;
  }
  for( int i = n-1; i > 0; --i ){
    if( s[i] == s[i-1] ){
        cnt2++;
    }
    else break;
  }
  if( cnt1 == n ){
    cout << (((n % 998244353)* ((n + 1)%998244353)) %  998244353)/2 << nl;
  }
  else if( s[0] == s[n-1] ){
    cout << (((cnt1+1)%998244353)* ((cnt2+1)) % 998244353) % 998244353 << nl;
  }
  else{
    cout << (cnt1+cnt2+1) % 998244353 << nl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}



