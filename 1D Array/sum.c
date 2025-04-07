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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Sum = %d",sum);

    return 0;
}