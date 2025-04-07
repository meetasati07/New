#include<stdio.h>

void reverse(int n,int a[])
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    return;
}
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
    reverse(n,a);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}