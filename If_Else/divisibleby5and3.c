#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
}