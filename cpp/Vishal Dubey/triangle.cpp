//question link 
#include <iostream>
using namespace std;
int main()
{  int k;
 int x;
  cin>>x;
 int n=1;
int sum=0;


 while(sum<=x){


 k=(n*n+n)/2;
 sum+=k;
n++;
 }
 cout<<n-2;
}

