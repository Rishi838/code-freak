#include <bits/stdc++.h>

using namespace std;

int main() {
unordered_map<string,int> m;
int n; 
cin>>n;
while(n--){
    string s;
    cin>>s;
    m[s]++;
}
for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;                                                                            
}
}
