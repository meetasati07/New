#include <stdio.h>

int main()
{
    int r;
    float A;
    printf("Enter the radius:");
    scanf("%d", &r);

    A = 3.14 * r * r;

    printf("The area of circle is : %f", A);

    return 0;
}