#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array elements:");
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter a number:");
    scanf("%d",&k);

    for (int i = 0; i < n; i++)
    {
        if(a[i]>k){
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}