#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter age of Ram:");
    scanf("%d", &a);

    printf("\nEnter age of Shyam:");
    scanf("%d", &b);

    printf("\nEnter age of Ajay:");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("Ram is Youngest");
        }
        else
        {
            printf("Ajay is Youngest"); // a>c -> b>a>c
        }
    }
    else // b<a
    {
        if (b < c)
        {
            printf("Shyam is Youngest");
        }
        else
        {
            printf("Ajay is Youngest"); // b>c -> a>b>c
        }
    }
}