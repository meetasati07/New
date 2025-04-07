#include <stdio.h>
#include <math.h>

void primefactor(int x) {
    if (x <= 1) {
        printf("No prime factors.\n");
        return;
    }

    int count;

    // Check for number of 2s and print once
    count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    if (count > 0) {
        printf("%d\n", 2);
    }

    // Check for odd factors and print once
    for (int i = 3; i <= sqrt(x); i += 2) {
        count = 0;
        while (x % i == 0) {
            x /= i;
            count++;
        }
        if (count > 0) {
            printf("%d\n", i);
        }
    }

    // This condition is to handle the case when n is a prime number
    // greater than 2
    if (x > 2) {
        printf("%d\n", x);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are:\n", n);
    primefactor(n);

    return 0;
}
