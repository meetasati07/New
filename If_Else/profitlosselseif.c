#include <stdio.h>

int main()
{
    int cp, sp;

    printf("Enter cost price:");
    scanf("%d", &cp);

    printf("Enter selling price:");
    scanf("%d", &sp);

    if (sp > cp)
    {
        printf("Profit");
    }
    else if (cp > sp)
    {
        printf("Loss");
    }
    else
    {
        printf("Neither profit nor loss");
    }
    return 0;
}