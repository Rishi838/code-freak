#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin>>s;
  int gh=0,count=0,t=0;
  int k=s.length();
  int arr[k];
  int a[k];
 for(int i=0;i<k;i++){
     arr[i]=s[i];
 }
for(int i=0;i<k-1;i++)
{if(arr[i+1]>=65&&arr[i+1]<=90){
        count++;
        
    }
}
if((arr[0]>=97&&arr[0]<=122)){
         gh++;
        
    }

for(int i=0;i<k;i++)
{
if(arr[i]>=65&&arr[i]<=90)
{
        t++;
}
}

if(k==count+gh)
{
for(int i=0;i<k;i++){
if(i==0){
a[0]=arr[0]-32;
}
else
{
a[i]=arr[i]+32;
}
  }
}
else
if(t==k)
{
for(int i=0;i<k;i++){


a[i]=arr[i]+32;

}
}
else
{
for(int i=0;i<k;i++)
{
a[i]=arr[i];
}
}
for(int i=0;i<k;i++){
s[i]=a[i];
}
cout<<s;
}
