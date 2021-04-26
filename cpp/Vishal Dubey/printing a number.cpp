//print the number as user give input and exit if user enters 42

#include <iostream>

using namespace std;

int main() {
       int n;
       while(1)
       {
       cin>>n;
       if(n==42)
       break;
       else
       cout<<n<<endl;
       }
}
