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
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            a[i]+=10;
        }
        else{
            a[i]*=2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}