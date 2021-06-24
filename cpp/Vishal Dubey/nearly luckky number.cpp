#include<bits/stdc++.h>

using namespace std;

int main()
{
long long  n,t=0,count=0;
cin>>n;
while(n!=0){
    int k;
    k=n%10;
    if(k==7||k==4){
        count++;
    }
    n=n/10;
    t++;
}
if(count==4||count==7){
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
}
