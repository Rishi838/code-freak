//link for question  https://www.spoj.com/problems/AE00/
#include <iostream>
using namespace std;
int main()
{
    long n;

long    count=0;
    cin >> n;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    if(j>=i){if(i*j<=n){

     count++;
    }

    }}}
     cout<<count;
    }
