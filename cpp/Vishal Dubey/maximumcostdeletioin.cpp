#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> lis;
        string s;
        cin>>s;
        int s1,s2,s3;
        s1=a*(b+c);
        char cur = s[0];
        int total=0,run=0;
        for(int i=0;i<a;i++){
            if(s[i]==cur){
                run++;
            }else
            { 
                cur=s[i];
                lis.push_back(run);
                run=1;
            }
        }
        lis.push_back(run);
        
        for(auto ass:lis){
            total+=ass;
        }
        s2=total*b + (lis.size()/2 +1)*c;
    cout<<max(s1,s2)<<endl;     
    }
    
}
