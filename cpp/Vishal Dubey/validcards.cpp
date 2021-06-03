#include<bits/stdc++.h>

using namespace std;

int main() {
    
int s=0,t=0;
int arr[16];
for(int i=0;i<16;i++){
cin>>arr[i];
}
for(int i=0;i<16;i=i+2){
arr[i]=2*arr[i];
}
for(int i=0;i<16;i=i+2){
if(arr[i]>=10){
arr[i]=arr[i]-9;
}
}
for(int i=0;i<16;i=i+2){
s+=arr[i];
}
for(int i=1;i<16;i=i+2){
t+=arr[i];
}
int sum=s+t;
if(sum%10==0){
cout<<"valid"<<endl;
}
else
{
cout<<"WRONG NUMBER"<<endl;
}
}
