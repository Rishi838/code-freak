#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int  j=s.length();
    int arr[j];
    int count=0,k=0;
   for(int i=0;i<j;i++){
       arr[i]=s[i];
   }
   for(int i=0;i<j;i++){
       if(arr[i]>=97&&arr[i]<=122){
           count++;
       }
       else
       k++;
   }
   if(count>=k){
       for(int i=0;i<j;i++){
       if(arr[i]>=65&&arr[i]<=90){
           arr[i]=arr[i]+32;
       }
   }
   for(int i=0;i<j;i++){
       s[i]=arr[i];
       }
       cout<<s<<endl;
}
else
if(count<k){
    for(int i=0;i<j;i++){
       if(arr[i]>=97&&arr[i]<=122){
           arr[i]=arr[i]-32;
       }
}
for(int i=0;i<j;i++){
       s[i]=arr[i];
       }
       cout<<s<<endl;
}
}
