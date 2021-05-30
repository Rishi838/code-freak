#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,m,d;
        cin>>x>>m>>d;
        int k=x*m;
        int p=x+d;
        if(k>p){
            cout<<p<<endl;
        }
        else 
        cout<<k<<endl;
    }
}
