#include<bits/stdc++.h>

using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int k,j,count=0;
    k=s1.length();
    j=s2.length();
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   int arr[k];
   int a[j];
   for(int i=0;i<k;i++){
       arr[i]=s1[i];
       a[i]=s2[i];
   }
   for(int i=0;i<k;i++){
       if(arr[i]>a[i]){
           cout<<"1"<<endl;
           break;
       }else
       if(arr[i]<a[i]){
           cout<<"-1"<<endl;
           break;
       }
       else
       count++;
   }
   if(count==k){
       cout<<"0"<<endl;
   }
}
