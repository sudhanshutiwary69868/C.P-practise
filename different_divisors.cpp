#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define prt(v) for(auto &i:v) cout<<i<<" ";cout<<"\n";
#define take(v) for(auto& i:v) cin>>i;
#define vl(x,n) vector<long long>x(n,0);
#define pb push_back
#define alr(s) s.rbegin(), s.rend()
#define all(s) s.begin(), s.end()
#define fi first
#define sc second
static const ll mod1 = 1e9 + 7;
static const ll mod2 = 1e9 + 9;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
  FAST_IO 
  int t;
  cin >> t; 
  while (t--) { 
    int d;
    cin >> d; 
   ll a,b;

   for(ll i=d+1;;i++){
    ll cnt=0;
    for(ll j=2;j*j<=i;j++){
      if(i%j==0) cnt++;
    }
    if(cnt==0){
      a=i;
      break;
    }
   }
   for(ll i=a+d;;i++){
    ll cnt=0;
      for(ll j=2;j*j<=i;j++){
      if(i%j==0) cnt++;
    }
    if(cnt==0){
      b=i;
      break;
    }

   }
   cout<<min(a*b,a*a*b)<<'\n';
  }
  return 0;
}
