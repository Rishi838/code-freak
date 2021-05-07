#include <iostream>

using namespace std;

int main() {
    int k=0;
    int n;
    cin>>n;
    int arr[n][n];
    int t;
    cin>>t;
    if(t%4==0){
        cout<<"Atef"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                k++;
                arr[i][j]=k;
            }
        }
        
    
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                cout<<arr[i][j]<<" ";
    
}cout<<endl;
}}
    else
     if(t%4==1){
        cout<<"Sameh"<<endl;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                k++;
                arr[j][i]=k;
            }
        }
        
    
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                cout<<arr[i][j]<<" ";
    
}cout<<endl;
}}
else
  if(t%4==2){
        cout<<"Ameen"<<endl;
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                k++;
                arr[i][j]=k;
            }
        }
        
    
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                cout<<arr[i][j]<<" ";
    
}cout<<endl;
}}
else
  if(t%4==3){
        cout<<"Shafeek"<<endl;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                k++;
                arr[j][i]=k;
            }
        }
        
    
     for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                cout<<arr[i][j]<<" ";
    
}cout<<endl;
}}
    
}
