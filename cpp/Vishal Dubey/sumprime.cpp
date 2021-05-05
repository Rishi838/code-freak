//link for the question  https://codeforces.com/contest/749/problem/A
#include <iostream>
using namespace std;
int main()
{
 int n;
 int p;
 int q;
 int s;
 cin>>n;
 if(n%2==0){
 p=n/2;
 cout<<p<<endl;
 for(int i=1;i<=p;i++)
 cout<<"2"<<" ";}
 else
 if(n%2!=0){
 q=n-3;
 s=q/2;
 cout<<s+1<<endl;
 for(int i=1;i<=s;i++){
 cout<<"2"<<" ";
 }
 cout<<"3"<<endl;}
 }
