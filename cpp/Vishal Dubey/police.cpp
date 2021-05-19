#include <iostream>

using namespace std;

int main() {
    int n,p,k;
    int count=0;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    for(int i=0;i<n;i++){
       if(arr[i]==-1){
           count++;
         
       }
       else
       if(arr[i]>0){
           p=arr[i];
           for(int j=i+1;j<n;j++){
               if(arr[j]==-1){
                   p=p-1;
                   if(p<0){
                   
                       count=count+1;
                   }
               }               
               else
               if(arr[j]>0){
                   if(p>0){
                       p=p+arr[j];
                   }
                   else
                 p=arr[j];
                 }
            }
     break; }
   }
   cout<<count;
   
}
