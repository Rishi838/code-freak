#include <iostream>

using namespace std;

int main() {
   int n,h,k=0,count=0;
   cin>>n>>h;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       if(arr[i]>h){
           count++;
       }
       else
       if(arr[i]<=h){
           k++;
       }
   }
   cout<<2*count+k<<endl;
      
}
