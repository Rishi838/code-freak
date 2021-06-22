#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define ll long long 
int main() {
ll z;
cin>>z;
ll a[4];
ll p=z;
for(int i=3;i>=0;i--){
    a[i]=p%10;
    p/=10;
}
while(1){
    ll b[4];
    z++;
    ll  p=z;
    ll count=0;
    for(int  i=3;i>=0;i--){
        b[i]=p%10;
        p/=10;
    }
    ll freq[10]={0};
    for(int i=0;i<=3;i++){
        freq[b[i]]++;
    }
    for(int i=0;i<=9;i++){
        if(freq[i]>=1){
            count++;
        }
    }
    if(count==4){
        cout<<z<<endl;
        break;
    }
    
}
}
