#include<stdio.h>

int main() {
  int n,m;
  scanf("%d%d",&n,&m);
  int arr[n][m],ar[n][m],a[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
      scanf("%d",&arr[i][j]);
          
      }
  }
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
      scanf("%d",&ar[i][j]);
          
      }
  }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
     a[i][j]=arr[i][j]+ar[i][j];
          
      }
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
      printf("%d ",a[i][j]);
          
      }printf("\n");
  }
    
}
