#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
   int n=s.length();
   
   
 
  for(int i=0;i<n;i=i+2){
      for(int j=i+2;j<n;j=j+2){
      if(s[i]>s[j]){
          int temp=s[i];
          s[i]=s[j];
          s[j]=temp;
      }
      else
      s[i]=s[i];
  }}
   for(int i=0;i<n;i=i+2){
       cout<<s[i];
    if(i!=n-1){  
           cout<<"+";
   }
   }
}
