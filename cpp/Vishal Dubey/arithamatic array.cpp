#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n,k=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
           k+=arr[i];
       }
       int j=k-n;
       if(j<0){
           cout<<"1"<<endl;
       }else
       if(j==0){
           cout<<"0"<<endl;
           
       }
       else
       cout<<j<<endl;
   }
}
