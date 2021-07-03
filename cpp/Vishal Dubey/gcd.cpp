#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
ll t;
cin>>t;
while(t--){
ll n,k=0,j,p;
cin>>n;
n=n-1;
while(k<=1){
n++;
j=n;
p=n;
ll n1=0;
while(j>0){
n1+=j%10;
j=j/10;}
k=__gcd(p,n1);
}
cout<<n<<endl;
}
}
