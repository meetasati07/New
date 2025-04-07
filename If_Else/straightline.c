#include <stdio.h>

int main()
{
    double x1, x2, x3, y1, y2, y3;

    printf("Enter first points:");
    scanf("%d%d", &x1, &y1);

    printf("Enter second points:");
    scanf("%d%d", &x2, &y2);

    printf("Enter third points:");
    scanf("%d%d", &x3, &y3);

    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
    {
        printf("The three points lie on same line");
    }
    else
    {
        printf("The three points doesn't lie on same line");
    }
}