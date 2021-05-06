//if given nuber can be represented as a power of 2 print no else yes
#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){

long long int n;
cin>>n;
long long int z=n&(n-1);
if(z==0){
cout<<"NO"<<endl;
}
else
cout<<"YES"<<endl;}
}
