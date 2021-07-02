#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int y,d,x,z;
        cin>>d>>x>>y>>z;
        int k=7*x;
        int j=y*d+z*(7-d);
        int p=max(k,j);
        cout<<p<<endl;
    }
}
