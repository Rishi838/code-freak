#include<bits/stdc++.h>

using namespace std;

void print(set<string> &s){
for(string value : s){
cout<<value<<endl;
}
for(auto it=s.begin();it!=s.end();++it){ //same as above one as both is same but we prefer above due to sortage
cout<<(*it)<<endl;
}
}
int main() {
set<string> s;  //set<set<int>> set in nested form
s.insert("abc");
s.insert("bhj");
s.insert("asdfc");
s.insert("abcs");
auto it=s.find("abc");
cout<<(*it);
 // print(s);
}
