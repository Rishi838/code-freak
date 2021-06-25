#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        if(n%2==0){
            for(int i=0;i<n;i=i+2){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        else
        {
             for(int i=0;i<n-1;i=i+2){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            int k=arr[n-1];
            arr[n-1]=arr[n-2];
            arr[n-2]=k;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    
}
