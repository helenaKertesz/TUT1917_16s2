#include <stdio.h>
#include <stdlib.h>

void fizzbuzz( int k );

int main(){
   int i = 1;
   while( i <= 100 ){
      fizzbuzz( i );
      i++;
   }
   return EXIT_SUCCESS;
}


// prints out a number or "Fizz " etca
// if / 3 -> Fizz
// if /5 -> Buzz
// both -> FizzBuzz
void fizzbuzz( int k ){
   if( k%3 == 0) {
      printf("Fizz");
   }

   if(  k % 5 == 0 ){
      printf("Buzz");
   }

   if( k % 3 != 0 &&  k % 5 != 0 ){
      printf("%d", k);
   }

   printf("\n");
}
