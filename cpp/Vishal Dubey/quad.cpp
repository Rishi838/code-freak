#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int k=a+c;
     int j=b+d;
     if(k==180&&j==180){
        cout<<"YES"<<endl;
     }
     else
     cout<<"NO"<<endl;
    }
}
