#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
        printf("The factorial of %d is: %d\n",i,p);
    }
    
    return 0;
}