/*
 * This program recursively sums the elemennts of an array
 *
 * Written by Helena Kertesz for 1917 16s2 tut12
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int recursiveSum( int array[], int n );
int recursiveFindMax( int array[], int n );

int main(){

   int array[ARRAY_SIZE] = {1, 2, 3, 4, 5};

   int sum = recursiveSum( array, 0 );
   printf("Array Sum is %d\n", length );

   int max = recursiveFindMax( int array[], int n );
   printf("Max Value in Array is %d\n", max );

   return 0;
}



// This is the recursive function - it calls itself
int recursiveSum( int array[], int n ){
   if( n == ARRAY_SIZE ){
      return 0;
   } else {
      int val = array[n];
      int rest = recursiveSum( array, n+1)
      return val + rest;
   }
}

// a recursive function to find the maximum value in an array
int recursiveFindMax( int array[], int n ){
   if( /* base case */ ){
      return 0;
   } else {
      // self call
      return 0;
   }
}
