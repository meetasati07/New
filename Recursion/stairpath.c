#include<stdio.h>

int stairs(int n)
{
    if(n<=2) return n;
    return stairs(n-1)+stairs(n-2);
}
int main()
{
    int n;
    printf("Enter number of stairs:");
    scanf("%d",&n);

    int x= stairs(n);
    printf("%d",x);
    return 0;
}