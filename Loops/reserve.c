#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    int r=0,ld=0;
    while (n > 0) {
        ld=n%10;
        r=r*10;
        r=r+ld;
        n=n/10;
    }
    printf("The reverse is %d\n", r);
    return 0;
}
