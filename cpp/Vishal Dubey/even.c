#include<stdio.h>

int main() {
   int n,count=0;
     printf("Enter size of an  array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements:");
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++){
      if(arr[i]<0){
          count++;
      }
}
printf("\nEven numbers: %d",count);
}
