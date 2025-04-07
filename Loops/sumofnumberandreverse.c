#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int a=n;
    int r=0,ld=0;
    while (n > 0) {
        ld=n%10;
        r=r*10;
        r=r+ld;
        n=n/10;
    }

    int s=a+r;
    printf("The sum of given number and reverse is %d\n", s);
    return 0;
}
