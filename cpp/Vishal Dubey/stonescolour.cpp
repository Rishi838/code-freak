#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,count=0;
cin>>n;
string s1;
cin>>s1;
for(int i=0;i<n-1;i++){
for(int j=i+1;j<=i+1;j++){
if(s1[i]==s1[j]){
count++;
}
else
count=count;
}
}
cout<<count<<endl;
}
