#include<stdio.h>

void main(){
   int  n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int k,m;
   printf("Enter the element and at which position you want that number: ");
   scanf("%d%d",&k,&m);

   arr[m]=k;
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
}
