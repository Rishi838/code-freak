#include<bits/stdc++.h>

using namespace std;

int main() {
   int k,n,w,sum=0,i=0,req;
   cin>>k>>n>>w;
   while(w--){
       i++;
        sum+=k*i;
   }
   req=abs(n-sum);
   if(sum<=n){
       cout<<"0"<<endl;
   }else
   cout<<req<<endl;
}
