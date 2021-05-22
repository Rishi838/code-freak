#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum=0,num=0,tum=0;
   int t;
   cin>>t;
   while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       sum=sum+a;
       num+=b;
       tum+=c;
     
   }
   
   
   if(sum==0&&num==0&&tum==0){
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}
