  //shan61916
#include <bits/stdc++.h>
  using namespace std;
typedef   long long ll;
typedef   unsigned long long ull ;
typedef   double dll ;

#define   mp make_pair
#define   pb push_back
#define   ff first 
#define   ss second
#define   IOS ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define   endl "\n" 
#define   pll pair<ll, ll>
#define   all(x) x.begin(), x.end()
#define   vll vector<ll> 


int main(){
 IOS
#ifdef SHAN
    freopen("input.txt" , "r" , stdin);  
#endif
  ll tc = 1;
  ll T;
  cin >> T;
  while(T--) {
  cout << "Case #" << tc++ << ": "; 
  ll n;
  cin >> n;
  string s;
  cin >> s;
  ll todo = (n+1)/2;
  ll mx = 0;
  for(ll i = 0; i < todo; i++) mx+= (ll)(s[i]-'0');
  ll ans = mx;
  ll start = 0;
  for(ll i = todo; i < n; i++) {
    mx-= (ll)(s[start++]-'0');
    mx+= (ll)(s[i] -'0');
    ans = max(ans, mx);
  }
  cout << ans << endl;
  }
  return 0;
} //good night.