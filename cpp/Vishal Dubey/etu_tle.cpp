#include <bits/stdc++.h>
#define  ll long long 
using namespace std;
int main(){
  ll t;
  cin>>t;
   while(t--){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(ll i=1;i<=n;i++){
    cin>>arr[i];
    }
     while(x--){
     ll a,b,even=0,even1=0;
     cin>>a>>b;
     for(ll i=1;i<a;i++){
          if(arr[i]%2==0){
          even++;
            }
            }
            for(ll i=1;i<=b;i++){
                if(arr[i]%2==0){
                even1++;
                }
               }
    ll total_even=even1-even;
    ll total_odd=abs(b-a+1-total_even);
    ll sume=(total_even*(total_even-1)*(total_even-2))/6;
    ll sumo=((total_odd*(total_odd-1))/2)*total_even;
cout<<sume+sumo<<endl;
}
}
}
