#include <iostream>

using namespace std;

int main() {
   int a,b,c,d,e,w;
   cin>>a>>b>>c>>d>>e>>w;
   if(w%2==0&&(a*2+b*4+c*8+d*16+e*32)>w){
       cout<<"YES";
       }
       else
       cout<<"NO";
}
