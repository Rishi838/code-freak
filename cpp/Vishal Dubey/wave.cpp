#include <iostream>

using namespace std;

int main() {
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
        }
        while(p--){
            int a,j=0,count=0,pt=0;
            cin>>a;
            for(int i=0;i<n;i++){
                j=a-arr[i];
                if(j<0){
                    count++;
                }
                if(a==arr[i]){
                    pt++;
                }
            }
            if(pt>=1){
                cout<<"0"<<endl;
            }else
            if(count%2==0){
                cout<<"POSITIVE"<<endl;
            }
            else
            if(count%2!=0){
            cout<<"NEGATIVE"<<endl;}
        }
}
