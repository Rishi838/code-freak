#include <bits/stdc++.h>

using namespace std;

int main() {
long long int n,sum=0,max=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
sum+=arr[i];
 if(arr[i]>max){
max=arr[i];
}
else
max=max;
}
if(sum%2==0){
if((sum-max)>=max){
cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
}
else
cout<<"NO"<<endl;
}
