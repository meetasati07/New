#include<stdio.h>

int main()
{
    int n;

    printf("Enter number:");
    scanf("%d",&n);

    int s=0,ld=0;
    while (n>0)
    {
          ld=n%10;
          s= s+ld;
          n=n/10;  
    }
    printf("The sum of digits are %d",s);
    return 0;
}
