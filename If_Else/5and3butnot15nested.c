#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            if (n % 15 == 0)
            {
                printf("The number is divisible by 5, 3 and 15");
            }
            else
            {
                printf("The number is divisible by 5 and 3 but not 15");
            }
        }
        else
        {
            printf("The number is divisible by 5 and 3 but not 15");
        }
    }
    else
    {
        printf("The number is divisible by 5 but not 3 and 15");
    }
}