#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides:");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("These are sides of triangle");
    }
    else
    {
        printf("These are not sides of triangle");
    }
    return 0;
}