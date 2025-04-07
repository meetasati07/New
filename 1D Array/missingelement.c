#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,6,7,8,9,10};
    
    int sum=0;
    for (int i = 0; i <= 8; i++)
    {
        sum+=a[i];
    }
    int sum2=0;
    for (int i = 0; i < 10; i++)
    {
        sum2=(10*(10+1))/2;
    }
    int x=sum2-sum;
    printf("The missing element is %d",x);

    return 0;
}