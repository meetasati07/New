#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];

    printf("Enter a string:");
    gets(s1);

    int len = strlen(s1);

    char s2[100];
    strcpy(s2, s1);
    for (int i = 0; i < len; i++)
    {
        s2[i] = s2[len - 1 - i];
    }
    int f = 0;
    for (int i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
        {
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("The string %s is a palindrome.", s1);
    }
    else
    {
        printf("The string %s is not a palindrome.", s1);
    }
}