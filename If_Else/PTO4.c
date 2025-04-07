#include <stdio.h>

int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10; // boolean expression either true=1 or false=0
    printf("\nx=%d y=%d z=%d", x, y, z);
}