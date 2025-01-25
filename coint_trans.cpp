#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n<=3){
      cout<<1<<"\n";
    }
    else{
      int cntr=1;
    while(n>3){
     n/=4;
     cntr*=2;
    }
    cout<<cntr<<"\n";
    }
  }
  return 0;
}