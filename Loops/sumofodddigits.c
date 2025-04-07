#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int s = 0, ld = 0;
    while (n > 0) {
        ld = n % 10;
        if (ld % 2 != 0) { // Check if the digit is even
            s = s + ld;
        }
        n = n / 10;
    }
    printf("The sum of odd digits is %d\n", s);
    return 0;
}
