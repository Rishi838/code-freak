#include <stdio.h>


int main() {
  int t;
  scanf("%d",&t);
  while(t--){
      int n,k=0,p=0,l=0,w=0;
     
      int x[100002],y[100002];
      scanf("%d",&n);
      for(int i=0;i<n;i++){
          scanf("%d",&x[i]);
      }
      for(int i=0;i<n;i++){
          scanf("%d",&y[i]);
      }
      for(int i=0;i<n;i=i+2){
          k+=x[i];
      }
      for(int i=1;i<n;i=i+2){
        p+=y[i];
      }
      int sum1=k+p;
      for(int i=0;i<n;i=i+2){
         l+=y[i];
      }
      for(int i=1;i<n;i=i+2){
        w+=x[i];
           }
           int sum2=l+w;
           if(sum1>sum2){
               printf("%d",sum2);
              }
              else
              printf("%d",sum1);
      
  }

 
}
