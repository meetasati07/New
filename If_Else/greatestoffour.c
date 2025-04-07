#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four no.:");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest number is: %d", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("The greatest number is: %d", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("The greatest number is: %d", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("The greatest number is: %d", d);
    }
    return 0;
}
