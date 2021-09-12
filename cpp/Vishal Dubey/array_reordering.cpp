#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
        int n,k,count=0,l=0;
        cin >> n;
        int arr[n];
         for ( int i=0 ; i < n ; i++){
         cin>>arr[i];
         if(arr[i]%2==0){
             l++;
         }
        }
        
        int a[l],b[n-l],j=0,ja=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                a[j]=arr[i];
                j++;   
            }else
            {
                b[ja]=arr[i];
                ja++;
            }
            }
           
            for(int i=0;i<l;i++){
                arr[i]=a[i];
            }
            j=l;
           for(int i=0;i<n-l;i++){
                arr[j]=b[i];
               j++;
               
           }
        
        //sort(arr,arr+n,greater<int>());
     
        
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                k=__gcd(arr[i],2*arr[j]);
                if(k>1){
                    count++;
                }
            }
        }
    
       cout<<count<<endl;
    }
}
