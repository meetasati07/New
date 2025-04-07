#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of stdents:");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <n; i++)
    {
        if(a[i]<35) printf("%d ",i+1);
    }
}