#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            if(arr[i]*arr[j]==i+j+2){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
