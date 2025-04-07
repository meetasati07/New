#include<stdio.h>

int main()
{
    int x=15;
    int a=(x!=15);
    x=20;
    int b=x;
    int c=x<30;
    printf("\n%d %d %d",a,b,c);
}