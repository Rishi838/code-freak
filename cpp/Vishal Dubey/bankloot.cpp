#include<bits/stdc++.h>
using namespace std;
int main() {
long int t,n,d,p,q,sum;
scanf("%ld",&t);
while(t--){
    scanf("%ld%ld%ld%ld",&n,&d,&p,&q);
    int a=n/d;
    int b=n%d;
    sum=p*a*d+((a-1)*q*a*d)/2 + b*(p+(a*q)); 
    printf("%ld\n",sum);
    
}
}
