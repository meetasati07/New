#include<stdio.h>

int main()
{
    int n;

    printf("Enter number of rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            int d=a+64;
            char ch=(char)d;
            printf("%c ",d);
            a++;
        }
        int b=i-1;
        for(int l=1;l<=i-1;l++){
            int e=b+64;
            char ch=(char)e;
            printf("%c ",e);
            b--;
        }
        printf("\n");
    }
}