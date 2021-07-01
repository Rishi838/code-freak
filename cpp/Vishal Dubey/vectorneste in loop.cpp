#include<bits/stdc++.h>
//#define ll long long 

using namespace std;

int main(){
     vector<pair<int,int>> v;
      for(int i=0;i<4;i++){
         int x,y;
         cin>>x>>y;
         v.push_back({x,y});
     }
     for(int i=0;i<v.size();i++){
         cout<<v[i].first<<" "<<v[i].second<<endl;
     }
}
