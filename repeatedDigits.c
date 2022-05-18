#include <stdbool.h>
#include <stdio.h>

int main()
{
   bool digit_seen[10] = { false };
   printf("Enter a number: ");
   long n;
   scanf("%ld", &n);
   
   int digit = 0;
   printf("Repeated digit(s): ");
   while( n > 0 )
   {
      //gets the last digit of input number
      digit = n % 10; 

     //prints out the seen digit
      if(digit_seen[digit])
         printf("%ld ", digit);

      //assign true if the digit hasn't seen yet
      if(!digit_seen[digit])
         digit_seen[digit] = true;
       
       n /= 10; //removes the last digit
       digit++; //What the fuck is this?
   }
   
   return 0;
}
