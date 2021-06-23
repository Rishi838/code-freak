#include <bits/stdc++.h>

using namespace std;

int main() {
 int n,count=0,t=0;
 cin>>n;
 string s;
 cin>>s;
 for(int i=0;i<n;i++){
     if(s[i]=='D'){
         count++;
     }
     if(s[i]=='A'){
         t++;
     }
 }
 if(count>t){
     cout<<"Danik"<<endl;
 }
 else
 if(count<t){
     cout<<"Anton"<<endl;
 }
 else
 cout<<"Friendship"<<endl;
}
