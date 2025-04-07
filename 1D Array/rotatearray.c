#include<stdio.h>

void rotate(int a[],int si,int ei)
{
    for(int i=si,j=ei;i<j;i++,j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
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
    int k;
    printf("Enter how many times to rotate:");
    scanf("%d",&k);

    k=k%n;
    rotate(a,0,n-1);
    rotate(a,0,k-1);
    rotate(a,k,n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}