#include<iostream>

using namespace std;

int main() {
int n,j=0,count=0,k,j2=0;
cin>>n;
int pt=n;
while(n!=0){
k=n%10;
j++;
if(k==4||k==7){
count++;
}else
if(pt%4==0||pt%7==0||pt%47==0||pt%744==0||pt%74==0){
cout<<"YES"<<endl;
j2++;

break;
}
n=n/10;
}
if(count==j){
cout<<"YES"<<endl;
}else
if(j2==0){
cout<<"NO";}
}
