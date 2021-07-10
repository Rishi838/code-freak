#include<bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int k=s.length();
    int count=0,k2=0,p=0,jr=0;
    int arr[k];
    for(int i=0;i<k;i++){
        arr[i]=s[i];
        if(arr[i]==97){
            k2++;
        }
        
    }
     if(s[0]=='a'&&s[1]!='b'){
         jr++;
     }
    sort(arr,arr+k);
    for(int i=0;i<k-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<"NO"<<endl;
            p++;
            break;
           
        }else
        if(abs(arr[i]-arr[i+1])==1){
            count++;
        }
        
    }
    if(jr==1&&k!=1&&p==0){
        cout<<"NO"<<endl;
        
    }else
    if((count==k-1)&&(k2==1)&&p==0){
        cout<<"YES"<<endl;
    }else
    if(p==0){
    cout<<"NO"<<endl;}
}
    
}
