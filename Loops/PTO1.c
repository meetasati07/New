#include<stdio.h>

int main()
{
    int j;// No initialization
    printf("%d",j);

    while(j<10){
        printf("%d",j);
        j++;
    }
}