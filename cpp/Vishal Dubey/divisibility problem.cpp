#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,j,k,value;
    cin>>t;
    while(t--)
{
    int a,b;
    cin>>a>>b;
     k=a/b;

k+=1;

     j=b*k;
     
     value=abs(a-j);
     if((a%b)!=0){
    cout<<value<<endl;}
    else
    cout<<"0"<<endl;
}
    
}
