#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    for (int i = 0; i<=n; i++)
    {
        int first=1;
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("%d ",first);
            first=first*(i-k)/(k+1);
        }
        printf("\n");
    }
}