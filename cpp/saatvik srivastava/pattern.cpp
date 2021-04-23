//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<" enter row\n";
    cin>>n;

    cout<<"enter column\n";
   
    cin>>m;

    for(int i =1;i<=n;i++){
        for(int j=1; j<=m;j++){
            cout<<" * ";
        }
        
        cout<<endl;
    }

    return 0;
}
