#include<iostream>

using namespace std;

int main() {
   long long int k,n,p,t,o;
   cin>>k>>n;
   if(k%2==0){
       p=k/2;  //p is number of even term
       o=k/2;
       if(n<=o){
           t=2*n-1;
           cout<<t<<endl;
       }else
       if(n>o){
             p=n-o;
             t=2*p;
             cout<<t<<endl;
       }
       
   }
   else
   {
       p=k/2;
       o=(p+1);
            if(n<=o){
           t=2*n-1;
           cout<<t<<endl;
       }else
       if(n>o){
             p=n-o;
             t=2*p;
             cout<<t<<endl;
       }
       
       
   }
}
