#include<stdio.h>

int main()
{
    int n;

    printf("Enter number:");
    scanf("%d",&n);

    int c=0;
    while (n>0)
    {
          n=n/10;
          c++;  
    }
    printf("The number of digits are %d",c);
}