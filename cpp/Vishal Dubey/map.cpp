#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,string> h;
    h[1]={"abd"};
    h[2]={"abcd"};
    h[3]={"tra"};
    map<int,string> :: iterator it;
    for(it=h.begin();it!=h.end();++it){
        cout<<it->first<<" "<<it->second;
    }
}
