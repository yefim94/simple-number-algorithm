#include <stdio.h>
int main() {
   int num1;
   int num2;
   int total;
   int triple;
   printf("put in number 1: ");
   scanf("%i", &num1);
   printf("put in number 2 ");
   scanf("%i", &num2);
   if(num1 != num2) {
      total = num1 + num2;
      printf("%i", total);
   } else {
      total = num1 + num2;
      total *= 3;
      printf("%i", total);
   }
  return 0;
}