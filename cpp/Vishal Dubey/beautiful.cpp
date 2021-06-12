#include<bits/stdc++.h>

using namespace std;

int main()
{int arr[5][5];
int k,n,x,y;
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
cin>>arr[i][j];
if(arr[i][j]==1){
k=i;
n=j;
}
}
}
x=abs(k+1-3);
y=abs(n+1-3);

cout<<x+y<<endl;
   
}
