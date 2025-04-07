#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
        
    }
    printf("The factorial is: %d",a);
    return 0;
}
