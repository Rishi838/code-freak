#include<bits/stdc++.h>
using namespace std;

int main() {
    
   string s;
   cin>>s;
   string t;
   cin>>t;
   int n=s.length();
   int p=t.length();
   int count=0,k=0,g=0;
  if(n!=p){
    cout<<"NO"<<endl;
    g++;
}
else
for(int i=0;i<n;i++){
    if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')){

        k++;
        
    }
else
if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(t[i]!='a'&&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u')){

        k++;
        
    }
    else
   {
       count++;
   }

}

    if(count==0&&k==n){
        cout<<"YES"<<endl;
    }else
    if(g==0&&count>0)
    {cout<<"NO"<<endl;
}}
