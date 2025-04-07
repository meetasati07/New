#include<stdio.h>

int main()
{
    int k=35;
    int a=(k==35);
    k=50;
    int b=k;
    int c=k>40;
    printf("\n%d %d %d",a,b,c);
    return 0;
}