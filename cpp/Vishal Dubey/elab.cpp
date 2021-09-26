#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l,m,n;
        cin>>l>>m>>n;
        if(l>(m*n)){
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;
    }
}
