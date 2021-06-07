#include<bits/stdc++.h>

using namespace std;

int main() 
{
int t;
cin>>t;
while(t--){
int n,count=0,tl=0,k=0,kl=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
if(s[i]=='1'){
count++;
}
else
if(s[i]=='0'){
tl++;
}
}

if(tl==n){
cout<<n<<endl;
}
else
if(count==n){
    cout<<2*n<<endl;
}
else
if(count==n-1||tl==n-1){
if((s[0]=='1'&&s[n-1]=='0')||(s[0]=='0'&&s[n-1]=='1')){
cout<<2*n<<endl;
}
else
{
for(int i=0;i<n;i++){
if(s[i]=='1'){
kl+=2;
}
else
kl+=1;
}
cout<<kl<<endl;}
}
else{
for(int i=0;i<n;i++){
if(s[i]==1){
k+=2;
}
else
k+=1;
}
cout<<k<<endl;}
}
}
