#include<stdio.h>

int main() {
{int a,b=0,r,i;
scanf("%d",&a);
for(i=a;i!=0;i/=10)
{r=i%10;
b=b*10+r;
}
printf("Reverse no. is \t%d",b);

}
}
