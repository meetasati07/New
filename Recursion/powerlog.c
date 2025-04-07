#include<stdio.h>

int powerlog(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int x=powerlog(a,b/2);
    int p;
    if(b%2==0){
        p=x*x;
    }
    else{
        p=x*x*a;
    }
    return p;
}
int main()
{
    int a;
    printf("Enter base:");
    scanf("%d",&a);

    int b;
    printf("Enter power:");
    scanf("%d",&b);

    int p=powerlog(a,b);

    printf("%d raised to %d is %d",a,b,p);

    return 0;
}