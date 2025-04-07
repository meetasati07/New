#include<stdio.h>

int main()
{
    int n,c=0;
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
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                c++;
                printf("(%d,%d)\n",a[i],a[j]);
            }
        }
    }
    printf("Total pairs = %d",c);
    return 0;
}