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
    int x;
    printf("Enter a number:");
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                c++;
                printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("Total pairs = %d",c);
    return 0;
}