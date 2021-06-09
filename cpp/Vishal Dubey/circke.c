#include <stdio.h>

int main()
{
    printf("Enter the radius of circle:");
    int n;
    scanf("%d",&n);
    int k;
    k=n*2;
    printf("\nDiameter of circle: %d\n",k);
    printf("Area of circle: %f\n",3.14*n*n);
    printf("Perimeter of circle: %f\n",2*3.14*n);
    
}
