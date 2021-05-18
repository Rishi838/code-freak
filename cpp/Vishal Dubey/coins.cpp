#include <bits/stdc++.h>

using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int a,b,c,n;
       int x,y,z;
     cin>>a>>b>>c>>n;
    x=(n+b+c-2*a)/3;
    y=(n+a+c-2*b)/3;
    z=(n+a+b-2*c)/3;
  int p=n+b+c-2*a;
  int q=n+a+c-2*b;
  int r=n+a+b-2*c;

  if(x*3==p&&y*3==q&&z*3==r &&p>=0&&q>=0&&r>=0)
  {
        cout<<"YES"<<endl;
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}}
