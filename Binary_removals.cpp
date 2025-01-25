
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
   FAST_IO 
   int t;
   cin>>t;
   while(t--){
    string str;
    cin>>str;
    int len1=str.find("11");
    int len2=str.rfind("00");
    cout<<(len1!=-1 && len2!=-1 && len1<len2 ? "NO":"YES")<<endl;
  

   }
