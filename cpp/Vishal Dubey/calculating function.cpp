#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    if(n%2==0){
        n=n/2;
        cout<<n<<endl;
    }
    else
    {
        long long int p=n;
        n=n/2;
        long long int k=n-p;
        cout<<k<<endl;
    }
}
