#include <bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main() {
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    while(q--){
        int l,m;
        cin>>l>>m;
        
        for(int i=l;i<=m;i++){
            if(arr[i]==0){
                arr[i]=1;
            }
            else
            arr[i]=0;
        }
    }
    for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
        
    }
    
}
