#include <iostream>

using namespace std;

int main() {
    int n,m,count=0,kt=0;
    cin>>n>>m;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int k=arr[m-1];
      for(int i=0;i<n;i++){
          if(arr[i]>=k&&arr[i]!=0){
              count++;
          }
      }
       for(int i=0;i<n;i++){
          if(arr[i]==0){
              kt++;
          }
      }
      if(kt==n){
          cout<<"0"<<endl;
      }else
      cout<<count<<endl;
}
