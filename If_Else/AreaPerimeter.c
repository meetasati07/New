#include <stdio.h>

int main()
{
    int l, b, A, P;

    printf("Enter length:");
    scanf("%d", &l);

    printf("Enter breadth:");
    scanf("%d", &b);

    A = l * b;

    P = 2 * (l + b);

    if (A > P)
    {
        printf("The area is greater than perimeter");
    }
    else
    {
        printf("The area is not greater than perimeter");
    }
    return 0;
}