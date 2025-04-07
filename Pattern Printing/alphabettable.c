#include<stdio.h>

int main()
{
    int n;

    printf("Enter number of rows:");
    scanf("%d",&n);

    int nsp=1;
    int nst=n;
    int m=1;
    for(int i=1;i<=2*n+1;i++)
    {
        int d=m+64;
        char ch=(char)d;
        printf("%c ",d);
        m++;
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            int d=a+64;
            char ch=(char)d;
            printf("%c ",d);
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
            a++;
        }
        for(int j=1;j<=nst;j++)
        {
            int d=a+64;
            char ch=(char)d;
            printf("%c ",d);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}