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
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                printf("%d is duplicate",a[i]);
                break;
            }
        }
    }
    
    return 0;
}