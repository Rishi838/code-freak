#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
   
      int p=0;
    while(t--){
          int count=0;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        for(int i=0;i<3;i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count>=2){
        p++;
    }
    
        
    }
    
    cout<<p<<endl;
}
