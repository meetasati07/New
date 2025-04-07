#include<stdio.h>

int fibonacci(int x)
{
    int a=1,b=1,fib=0;    
    for(int i=1;i<=x;i++)
    {
        fib=a+b;
        printf("%d ",fib);
        a=b;
        b=fib;
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("1 2");
    fibonacci(n);
    return 0;
}