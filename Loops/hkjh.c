#include <stdio.h>

int main()
{
    int c = 0, i, sum = 0, ld = 0, a;
    
    printf("Enter number:");
    scanf("%d",&i);
    while (i > 0)
    {
        i = i / 10;
        c++;
    }
    printf("%d ",c);
    
    for (int x = 1; x <= c; x++)
    {
        ld = i % 10;
        a = ld * x;
    }
    printf("%d ",a);
}