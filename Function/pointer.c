#include <stdio.h>

int main()
{
    int a = 6;
    int *x = &a; // int* -> int ka address store karta hai
    // *x = 9; -> a is changed
    int **y = &x; // int** -> int* ka address store karta hai

    printf("%d\n", a);
    
    printf("%p\n", x);  // %p se address print hota hai
    
    printf("%d\n", *x); // *x us address pe store data ko point karta hai
    
    printf("%p\n", y);

    printf("%p\n",*y);
    
    printf("%d\n", **y);

    return 0;
}