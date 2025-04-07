#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    // for(int i=n;i>=1;i--){ //outer loop-->no. of lines
    //     for(int j=i;j>=1;j--) //inner loop ->>no. of stars in each line
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    // Output 
    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    for(int i=1;i<=n;i++){ //outer loop-->no. of lines
        for(int j=1;j<=n+1-i;j++) //inner loop ->>no. of stars in each line
        {
            printf("%d ",j);
        }
        printf("\n");
    }
} 