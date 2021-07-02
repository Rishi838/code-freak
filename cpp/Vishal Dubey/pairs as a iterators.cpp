#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> v={1,5,3,65,3};
//    for(int i=0;i<v.size();i++){
  //      cout<<v[i]<<" ";
    //}cout<<endl;
   // vector<int> ::iterator it =v.begin();
    //for(it=v.begin();it!=v.end();it++){
   //     cout<<*it<<" ";
    
    //}
    vector<pair<int,int>> v_p={{2,3},{4,5},{6,5},{5,8}};
    vector<pair<int,int>> :: iterator it ;
    for(it=v_p.begin();it!=v_p.end();it++){
   cout<<it->first<<","<<it->second<<" ";   //  (*it).first = it->first
    }cout<<endl;
}
