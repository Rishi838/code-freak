#include <iostream>

using namespace std;

int main(){
int n,k=0;
cin>>n;
int arr[7];
for(int i=0;i<7;i++)
{
 cin>>arr[i];
}
while(n>k){
for(int i=0;i<7;i++){
 k+=arr[i];
if(k>=n){
    cout<<i+1;
    break;
}
}
    
}
}

