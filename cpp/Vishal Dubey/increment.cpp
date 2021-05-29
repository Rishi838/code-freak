#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int t;
 int count=0;
 cin>>t;
 while(t--){
     string s;
     cin>>s;
     if(s[0]=='+'){
         count++;
     }else
       if(s[0]=='-'){
       
         count--;
     }else
       if(s[1]=='+'){
         count++;
     }else
       if(s[1]=='-'){
        count--;
     }
   
 } 
 
 
 
 cout<<count<<endl;
 
}
