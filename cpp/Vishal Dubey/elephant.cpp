#include<bits/stdc++.h>

using namespace std;

int main() {
    int x,count=0,i=0,k=0;
    cin>>x;
    while(k<x){
        i++;
        k=5*i;
        
        count++;
    }
    i=0;
    while(k<x){
        i++;
        k=4*i;
    
        count++;
    }
    i=0;
    while(k<x){
        i++;
        k=3*i;
        
        count++;
    }
    
    while(k<x){
        i++;
        k=2*i;
        
        count++;
    }
    while(k<x){
        i++;
        k=1*i;
        
        count++;
    }
    cout<<count<<endl;
    
}
