#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m);
    for(auto &x:a){
      cin>>x;
    }
vector<int>q(k);
for(auto &x:q){
      cin>>x;
    }
    if(k==n){
      for(int i=0;i<m;i++){
        cout<<'1';
      
      }
        cout<<"\n";
    }
    else if(k==n-1){
      int m1=1;
      for(auto x:q){
        if(x==m1){
          m1++;
        }
        else{
          break;
        }
      }
      if(m1>n){
        m1=n;
      }
      string r;
      r.reserve(m1);
      for(auto x:a){
        r+=(x==m1)?'1':'0';
      }
      cout<<r<<"\n";
    }
    else{
      for(int i=0;i<m;i++){
        cout<<'0';
        
      }
      cout<<"\n";
    }

    
  }
}