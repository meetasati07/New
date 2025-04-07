#include<stdio.h>

long long int factorial(int x)
{
    long long int fact=1;

    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d = %d\n",x,fact);

}

int main()
{
    int n;

    printf("Enter a nunber:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    factorial(i);

    return 0;
}