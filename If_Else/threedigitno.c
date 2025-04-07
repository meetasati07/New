#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        printf("The no. is three digit");
    }
    else
    {
        printf("The no. is not three digit");
    }
}