#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    FAST_IO
string s;
cin>>s;
sort(s.begin(),s.end());
map<char,int>mpp;
for(auto c:s){
  mpp[c]++;
}
for(auto i=mpp.begin();i!=mpp.end();i++){
  cout<<i->first<<" "<<i->second<<endl;
}
return 0;

}