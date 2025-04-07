#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int a=1,b=1,s=1;
    printf("%d %d ",a,b);

    for(int i=1;i<=n-2;i++){
        s=a+b;
        a=b;
        b=s;
        printf("%d ",s);
    }
    
}