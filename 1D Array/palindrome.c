#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array elements:");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        b[n-1-i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==a[i])
        {
            printf("Palindrome.");
            break;
        }
        else{
            printf("Not a palindrome.");
            break;
        }
    }
    
    return 0;
}