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
        }for(int i=0;i<n;i++){
        if(arr[i]>=1&&arr[i]<=7){
            if(k<=i){
            k=i;
                
            }
            else
            k=k;
        }}
        cout<<k+1<<endl;
        
    }
}
