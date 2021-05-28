#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int k=s.length();
    if(k>10){
    cout<<s[0]<<k-2<<s[k-1]<<endl;
}
    else
    cout<<s<<endl;
}}
