#include<stdio.h>

int main()
{
    int n,sum1=0,sum2=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array elements:");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            sum1+=a[i];
        }
        else{
            sum2+=a[i];
        }
    }
    int diff=sum1-sum2;
    printf("Difference = %d",diff);
    return 0;
}