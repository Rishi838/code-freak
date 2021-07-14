#include<bits/stdc++.h>

using namespace std;

int main() {
int n,count=0,count1=0,count2=0,k;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i=i+3){
count=count+arr[i];
}
 for(int i=1;i<n;i=i+3){
count1=count1+arr[i];
}
for(int i=2;i<n;i=i+3){
count2=count2+arr[i];
}

if(count>count1&&count>count2){
cout<<"chest"<<endl;
}else
if(count1>count&&count1>count2){
cout<<"biceps"<<endl;
}else
cout<<"back"<<endl;
}
