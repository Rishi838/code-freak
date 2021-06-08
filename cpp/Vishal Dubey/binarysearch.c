#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the element you want to search\n");
int k;
scanf("%d",&k);
int a=0;
 int l=n;
  while(a<=l){
int mid=(a+l)/2;
if(arr[mid]==k){
printf("%d",mid);
return 0;
}else
if(arr[mid]>k){
l=mid-1;
}
else 
{ 
a=mid+1;

}
}
}
  

