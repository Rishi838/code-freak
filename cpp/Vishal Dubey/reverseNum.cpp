#include <iostream>

using namespace std;

int main() {
    int t;
    int rem;
    int rev=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }cout<<rev<<endl;
        rev=0;
    }
    
}
