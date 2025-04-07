#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){ //outer loop-->no. of lines
        for(int j=1;j<=n+1-i;j++) //inner loop ->>no. of stars in each line
        {
            printf("* ");
        }
        printf("\n");
    }
}