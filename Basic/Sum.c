#include <stdio.h>

int main()
{
    float x, y, sum;

    printf("Enter the two numbers:");
    scanf("%f%f", &x, &y);

    sum = x + y;

    printf("The sum of two numbers is: %f", sum);

    return 0;
}