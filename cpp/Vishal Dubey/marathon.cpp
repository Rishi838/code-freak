#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int D,d;
        cin>>D>>d;
        int a,b,c;
        cin>>a>>b>>c;
        int k=D*d;
        if(k>=10&&k<21){
            cout<<a<<endl;
        }else
        if(k>=21&&k<42){
            cout<<b<<endl;
        }else
        if(k>=42){
            cout<<c<<endl;
        }else{
            cout<<"0"<<endl;
        }
        
        
    }

 
}
