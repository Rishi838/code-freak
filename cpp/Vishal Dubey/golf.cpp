#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin>>t;
    while(t--)
         {
        int n,x,k;
        cin>>n>>x>>k;
        if(x%k==0||x%k==(n+1)%k)
         {
            cout<<"YES"<<endl;
         }
        
       
        else
          {
            cout<<"NO"<<endl;
          }
        }
    
}
