#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,p=0,k;
  cin>>n;
  for(int i=1;i<=n/2;i++){
      k=n%i;
      if(k==0){
      p+=i;
         }
  }
  if(p==n){
      cout<<"Perfect number"<<endl;
  }
  else
  {
      cout<<"not a perfect number"<<endl;
  }
}
