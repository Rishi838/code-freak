#include <bits/stdc++.h>

using namespace std;
void printvec(vector<int> v){
    for(int i=0;i<v.size();i++){    
        cout<<v[i]<<" ";
    }
}

int main() {
    vector<int> v;  //vector declaration
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);  //put the value in a vector a last index first
    }
    
    printvec(v);  //function to print vector v;
}
