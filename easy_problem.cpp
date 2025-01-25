#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
   FAST_IO 
   int n;
   cin>>n;
   string s;
   cin>>s;
   int i=s.find('1');
   if(i!=-1){
    cout<<"HARD\n";
   }
   else{
    cout<<"EASY\n";
   }
   return 0;

   }