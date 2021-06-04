#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;
while(n--){
int x,a,y,b,k,j;
cin>>x>>a>>y>>b;
if(y%x==0){
k=y/x;
}
else
k=(y/x)+1;
if(b%a==0){
j=b/a;
}
else
j=(b/a)+1;
cout<<k+j<<endl;
}
}
