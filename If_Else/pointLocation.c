#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter Coordinates:");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0){
        printf("The point is at origin");
    }
    else if(y==0){
        printf("Lies on X-axis");
    }
    else if(x==0){
        printf("Lies on Y-axis");
    }
    else
    {
        printf("Point neither lie on x-axis, y-axis or origin");
    }
}