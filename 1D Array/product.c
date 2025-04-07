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
    int p=1;
    for(int i=0;i<n;i++)
    {
        p*=a[i];
    }
    printf("Product = %d",p);

    return 0;
}