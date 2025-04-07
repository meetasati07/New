#include <stdio.h>

int main()
{
    int y;
    printf("Enter A Year:");
    scanf("%d", &y);

    if (y % 4 == 0)
    {
        printf("This is a Leap Year");
    }
    else
    {
        printf("This is not a Leap Year");
    }

    return 0;
}