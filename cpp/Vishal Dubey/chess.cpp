#include <iostream>

using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int k=2*(180+n);
        int j=a+b;
        int p=k-j;
        cout<<p<<endl;
    }
}
