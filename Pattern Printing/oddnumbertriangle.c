#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+2){ 
        for(int j=1;j<=i;j=j+2) 
        {
            printf("%d ",j);
        }
        printf("\n");
    }
} 