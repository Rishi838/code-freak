#include<bits/stdc++.h>

#define ll long long
using namespace std;


int main(){
  ll t;
  cin>>t;
  while(t--){
     ll a,b;
      cin>>a>>b;
      ll k;
      k=abs(a-b);
      if(k==0){
          cout<<"0"<<" "<<"0"<<endl;
      }else
      {
        ll j=min(a,b)%k,a1;
          
          if(j==0){
              a1=0;
          }else
          {
               a1=abs(j-k);
          }
          cout<<k<<" "<<min(a1,j)<<endl;
      }
  }
}
