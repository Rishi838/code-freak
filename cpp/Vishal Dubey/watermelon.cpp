#include <iostream>

using namespace std;

int main() {
    int w;
    cin>>w;
    int count=0;
    for(int i=1;i<w;i++){
        for(int j=1;j<w;j++){
            if(i*2+j*2==w){
                cout<<"YES"<<endl;
                count++;
                }
                break;
        }
    }
    if(count==0){
        cout<<"NO"<<endl;
    }
    
}
