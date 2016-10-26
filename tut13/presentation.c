#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
   printf("Integer Promotion:\n");
   int i = 5;
   char c = 'c';
   int sum;

   sum = i + c;
   printf("int sum = int i + char c\n");
   printf("sum = %d (char converted to int automatically)\n", sum);

   printf("\nArithmetic Conversion:\n");
   double j = 5.5;
   double test;

   test = i + j;
   printf("double test = int i + double j\n");
   printf("test = %f (int converted to double automatically)\n", test);

   printf("\nType Casting in C:\n");
   char stuff;
   stuff = 'a';

   printf("char stuff (a) printed as int = %d\n", (int)stuff);

   return 0;
}

