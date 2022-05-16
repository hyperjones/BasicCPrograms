#include <stdio.h>

int main()
{
   printf("Enter fraction one: ");
   int num1, denom1;
   scanf("%d/%d", &num1, &denom1);
   printf("Enter fraction two: ");
   int num2, denom2;
   scanf("%d/%d", &num2, &denom2);
   
   char operation, op;
   getchar(); //ungets '\n'
   
   
   int m, n, r;
   int num = 0, denom = 0;
  for(;;)
  {
     printf("Enter operator (*, /, -, +): ");
     operation = getchar();
     switch(operation)
     {
        case '+':
        {
            denom = denom1 * denom2;
            num = num1 * denom2 + num2 * denom1;
            op = '+';
            break;
        }
        case '-':
        {
           denom = denom1 * denom2;
           num = num1 * denom2 - num2 * denom1;
           op = '-';
           break;
        }
        case '*':
        {
           num = num1 * num2;
           denom = denom1 * denom2;
           op = '*';
           break;
        }
        case '/':
        {
           //gets the reciprocal by switching num2 and denom2
           int temp = 0;
           temp = num1;
           num2 =denom2;
           denom2 = temp;
           
           num = num1 * num2;
           denom = denom1 * denom2;
           op = '/';
           break;
        }
        default:
           printf("Invalid operator!\n");
           getchar(); //ungets '\n'
           continue;
     }
      
      getchar(); //ungets '\n';
     m = denom; n = num;
     //gets the GCD
     while(n > 0)
     {
        r = m % n;
        m = n;
        n = r;
     }
     
     switch(op)
     {
        case '+':
        {
         printf("%d/%d + %d/%d  = %d/%d\n", num1, denom1, num2, denom2, num / m, denom / m);
         return 0;
        }
        case '-':
        {
           printf("%d/%d - %d/%d  = %d/%d\n", num1, denom1, num2, denom2, num / m, denom / m);
           return 0;
        }
        case '*':
        {
            printf("%d/%d * %d/%d  = %d/%d\n", num1, denom1, num2, denom2, num / m, denom / m);
            return 0;
        }
        case '/':
        {
            printf("%d/%d / %d/%d  = %d/%d\n", num1, denom1, num2, denom2, num / m, denom / m);
            return 0;
        }
     }
  }
}
