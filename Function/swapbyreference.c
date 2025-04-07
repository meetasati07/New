#include <stdio.h>

int swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d", &a);
    int b;
    printf("Enter b:");
    scanf("%d", &b);

    swap(&a,&b);

    printf("The value of a is = %d\n", a);
    printf("The value of b is = %d", b);

    return 0;
}