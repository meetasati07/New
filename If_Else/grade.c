#include<stdio.h>

int main()
{
    int m;

    printf("Enter marks:");
    scanf("%d",&m);

    if(m>90 || m==100){
        printf("Excellent");
    }
    else if(m>80 || m==90){
        printf("Very Good");
    }
    else if(m>70 || m==80){
        printf("Good");
    }
    else if(m>60 || m==70){
        printf("Can do better");
    }
    else if(m>50 || m==60){
        printf("Average");
    }
    else if(m>40 || m==50){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
}