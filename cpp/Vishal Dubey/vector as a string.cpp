#include <bits/stdc++.h>

using namespace std;
void printvec(vector<string> v){
    for(int i=0;i<v.size();i++){    
        cout<<v[i]<<" ";
    }
}

int main() {
    vector<string> v;  //vector declaration
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);  //put the value in a vector a last index first
    }
    
    printvec(v);  //function to print vector v;
}
