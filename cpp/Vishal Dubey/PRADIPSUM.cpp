
#include <iostream>

using namespace std;

int main() {
      
       
  int a,b;
  
while(cin>>a>>b)
{  if(a<b){
   int sum=0;
   for(int i=a;i<=b;i++)
   {  sum+=i;
   }
   cout<<sum<<endl;
   }
   else
   if(a>b){ int sum=0;
   for(int j=b;j<=a;j++)
   {  sum+=j;
   }
   cout<<sum<<endl;
   }
   }
}
