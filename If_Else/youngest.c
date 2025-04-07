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

    if (a < b && a < c)
    {
        printf("Ram is Youngest");
    }
    if (b < a && b < c)
    {
        printf("Shyam is Youngest");
    }
    if (c < a && c < b)
    {
        printf("Ajay is Youngest");
    }
}