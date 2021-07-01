#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
sort(arr,arr+n);
ll ans1=arr[0]*arr[1]*arr[2]*arr[n-1]*arr[3];
ll ans2=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
ll ans3=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
ll ans=max({ans1,ans2,ans3});
cout<<ans<<endl;
}
}
