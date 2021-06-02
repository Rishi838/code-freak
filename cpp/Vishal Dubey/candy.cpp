#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;
int k=n*n;
int arr[k];
for(int i=0;i<k;i++){
    arr[i]=i+1;
}
for(int i=0;i<k/2;i++){
    cout<<arr[i]<<" "<<arr[k-1-i]<<endl;
}
}
