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
    int max=a[0];
    int smax=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i]){
            smax=max;
            max=a[i];
        }
        else if(a[i]!=max && smax<a[i]){
            smax=a[i];
        }
    }
    printf("Secondary Max = %d",smax);

    return 0;
}