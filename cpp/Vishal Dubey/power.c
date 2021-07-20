#include <stdio.h>
#include<math.h>
int power(int n1, int b);
int main() {
    int value, a, result;
    printf("Enter  number: ");
    scanf("%d", &value);
    printf("Enter power number ");
    scanf("%d", &a);
    result = power(value, a);
    printf("%d^%d = %d",value, a, result);
    return 0;
}

int power(int value, int a) {
    if (a != 0)
        return (value * power(value, a - 1));
    else
        return 1;
}
