#include<stdio.h>

int main()
{
    void india();
    india();
    return 0;
}
void india()
{
    printf("You are in India.\n");
    void australia();
    australia();
    return;
}
void australia()
{
    printf("You are in Australia.\n");
    void england();
    england();
    return;
}
void england()
{
    printf("You are in England.\n");
    return;
}


