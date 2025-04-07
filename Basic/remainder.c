#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b:");
    scanf("%d", &b);

    int q = a / b;

    int r = a - b * q; // Dividend = quotient*divisor +remainder

    printf("The remainder is:%d", r);

    return 0;
}