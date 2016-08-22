#include <stdio.h>
#include <stdlib.h>

void swap(int * first, int * second);

int main(){

   int a = 1;
   int b = 2;
   printf("a = %d, b = %d\n", a, b );

   swap( &a, &b); //What to give the function

   printf("a = %d, b = %d\n", a, b );

   return 0;
}

// This function swaps two numbers using pointers
void swap ( int * first, int * second){
   int temp = *first;
   *first = *second;
   *second = temp;
}
