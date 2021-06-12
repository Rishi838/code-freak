#include <iostream>

using namespace std;

int main() {
 string s1;
 cin>>s1;
 int k=s1[0];
 if(k>=97&&k<=122){
     k=k-32;
 }
 s1[0]=k;
 cout<<s1<<endl;
    
}
