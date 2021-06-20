#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z,p,q,r;
        cin>>x>>y>>z>>p>>q>>r;
        if(x<=y&&z<=p&&q>=r){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
}
}
