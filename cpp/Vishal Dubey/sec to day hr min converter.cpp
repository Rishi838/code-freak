#include<stdio.h>

int main() {
    int n,day,min,sec,hour;
    scanf("%d",&n);
    day=n/86400;
    n=n-day*86400;
    hour=n/3600;
    n=n-hour*3600;
     min=n/60;
     n=n-min*60;
     n=n;;
     printf("The Duration is %d days %d hours %d minutes %d seconds",day,hour,min,n);
    
}
