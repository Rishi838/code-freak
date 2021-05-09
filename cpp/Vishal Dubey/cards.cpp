#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    long long  int n;
        long long int s;
        long long int p;
        cin>>n;
        s=(3*n*n+n)/2;
        p=s%1000007;
        cout<<p<<endl;
    }
}
