// 1 - 2 + 3 - 4 + 5 - 6 +.....n

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    int s = 0;
    if (n % 2 == 0)
    {
        s = -n/2;
    }
    else
    {
        s = -n/2 +n;
    }

    printf("The sum is: %d", s);
    return 0;
}
