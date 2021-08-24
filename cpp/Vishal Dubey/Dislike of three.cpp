#include<bits/stdc++.h>

using namespace std;


int main() {
int arr[1000];
int j=1,i=1;
while(i<=1000){
        int count=0;
        while(count!=1){
        if(j%3!=0&&j%10!=3){
        arr[i]=j;
        count++;
            }
j++;
            }
i++;
            }
int t;
cin>>t;
while(t--)
{
int n ;
cin>>n;
cout<<arr[n]<<endl;
}
     }
