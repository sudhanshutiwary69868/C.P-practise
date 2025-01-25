// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// #define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// int main() {
//     FAST_IO 
//     ll n, m;
//     cin >> n >> m; 

//     vector<ll> arr; 
//     vector<ll> arr1; 

    
//     for (ll i = 1; i <= n; i++) {
//         arr.push_back(i);
//     }


//     for (ll i = 1; i <= m; i++) {
//         arr1.push_back(i);
//     }

//     int cntr = 0; 

   
//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j < arr1.size(); j++) {
//             if ((arr1[j] + arr[i]) % 5 == 0) {
//                 cntr++; 
//             }
//         }
//     }

//     cout << cntr << "\n";

//     return 0; 
// }




#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>a(5,0);
  vector<ll>b(5,0);
  for(int i=1;i<=m;i++){
    b[i%5]++;
  }
    for(int i=1;i<=n;i++){
    a[i%5]++;
  }
  ll ans=0;
  ans+=(a[0]*b[0]);
  ans+=(a[1]*b[4]);
  ans+=(a[2]*b[3]);
  ans+=(a[3]*b[2]);
  ans+=(a[4]*b[1]);
  cout<<ans<<"\n";
  return 0;


  //T.C-----O(n)
}