#include <stdbool.h>
#include <stdio.h>

int main()
{
   bool digit_seen[10] = { false };
   bool repeated_digit[10] = { false };
   printf("Enter a number: ");
   long n;
   scanf("%ld", &n);
   
   int digit = 0;
   while( n > 0 )
   {
      digit = n % 10;

      //if the digit has seen twice
      //the digit is repeated.
      if(digit_seen[digit])
         repeated_digit[digit] = true;
       
      //assign true if the digit hasn't seen 
      if(!digit_seen[digit])
         digit_seen[digit] = true;
       
       n /= 10;
       digit++;
   }
  
   printf("Repeated digit(s): ");
   for(int i = 0; i < 10; i++)
   {
      //prints out the repeated digit
      if(repeated_digit[i])
         printf("%d ", i);
   }
         
   return 0;
}
