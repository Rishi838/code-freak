#include <stdio.h>
int main() {
    char *p0;
   int a=1025;
   int *p;
    p=&a;
    printf("size of integer  %d bytes\n",sizeof(int));
     printf("adress of a is %d value is %d\n",p,*p);
    
     p0=(char*)p;  //type casting
      printf(" size of char is %d\n",sizeof(char));
       printf("adress of a is %d,",p0);
}
