//seive of enthr
#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;
    bool prime[x];
    for(int i=2;i<=x;i++){
        prime[i]=true;
        }
        prime[1]=false;
        for(int i=2;i*i<=x;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=x;j+=i){
                    prime[j]=false;
                }
            }
        }
for(int i=1;i<x;i++){
    if(prime[i]==true){
        cout<<i<<" ";
    }
}}
