 #include <stdio.h>

 int main()
{

    int i, num, sum, temp, ld, c, p=1;
   for (i = 1; i <= 500; i++)
    {
         num = i;
        sum = 0;
        while (num > 0)
       {
             ld = num % 10;  // get last digit
           num = num / 10; // remove last digit
                     
            
            // calculate power of digit to the number of digits
            
            temp = num;
            while (temp > 0)
           {
                 p = p * ld;
              temp = temp / 10;
             }
             sum += p; // add to sum
         } 
         if (sum == i) // check if sum is equal to the number
         {
             printf("%d\n", sum);
         }
         return 0;
     }
 }
