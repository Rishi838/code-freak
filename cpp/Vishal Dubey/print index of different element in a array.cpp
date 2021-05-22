#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[i]==a[j]){
                    break;
                }
                else 
                if(a[1]!=a[2]&&a[2]==a[3]){
                    cout<<"1"<<endl;
                    break;
                }
                else
                if(a[i]!=a[j]){
                  
                        i=i+1;
                    cout<<i<<endl;
                        break;
                    }
                        
                    }
                    
                }
            }
        }
    

