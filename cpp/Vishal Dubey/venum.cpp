#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    
    
    while(t--){
        int h,p,a;
int count=0;
 int i=0;
        cin>>h>>p>>a;
        
        while(h>0){
            i++;
            h=h-i*p;
            if(h>0){
                h=h+a;
                count++;
            }
            
        }
    cout<<count+i<<endl; }
   
}
