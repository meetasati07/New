 #include<stdio.h>
#include <math.h>

    int main()
{
    int i, num, sum, temp, ld, digits, p;

    for (i = 1; i <= 500; i++)
    {
        num = i;
        sum = 0;
        digits = 0;
        temp = num;

        // Calculate the number of digits
        while (temp > 0)
        {
            temp = temp / 10;
            digits++;
        }

        temp = num;

        // Calculate the sum of digits each raised to the power of the number of digits
        while (temp > 0)
        {
            ld = temp % 10;
            p = 1;

            // Correct power calculation
            for (int j = 0; j < digits; j++)
            {
                p *= ld;
            }

            sum += p;
            temp = temp / 10;
        }

        // Check if sum is equal to the number
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
