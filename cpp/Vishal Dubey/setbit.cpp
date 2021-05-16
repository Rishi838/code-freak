#include <bits/stdc++.h>

using namespace std;


int getbit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int setbit(int n,int pos){
    return (n|(1<<pos));
}
int main() {
    
    cout<<setbit(5,1)<<endl;
    
}
