#include<stdio.h>
#include<stdbool.h>

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
    printf("Enter a number:");
    scanf("%d",&k);
    bool flag=false;
    int idx=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==k)
        {
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==true) printf("%d is present at index %d",k,idx);
    else printf("%d is not present in array",k);
    return 0;
}