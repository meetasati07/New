#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two number:");
    scanf("%d%d", &a,&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("%d",p);                
}