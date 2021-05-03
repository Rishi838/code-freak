//Question link is here  https://www.spoj.com/submit/ARMY/id=27823498
#include<bits/stdc++.h>
using namespace std;

int main() {
        int t;
    cin>>t;
    while(t--){
cout<<endl;
         int n;
        int m;
           cin>>n;
        int arr[n];
           cin>>m;
           int ar[m];
        for(int i=0;i<n;i++)
          {
            cin>>arr[i];
           }
           for(int i=0;i<m;i++)
          {
             cin>>ar[i];
           }
        sort(arr,arr+n);
        sort(ar,ar+m);
         if(arr[n-1]>=ar[m-1]){
            cout<<"Godzilla"<<endl;
            }
            else
            if(ar[m-1]>arr[n-1]){
                cout<<"MechaGodzilla"<<endl;
            }
            else
            {cout<<"uncertain";}

    }}
