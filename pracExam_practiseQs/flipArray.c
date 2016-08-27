/*
 * given an array of size n, write a function to flip the values
 * ie [1, 2, 3, 4, 5] -> [5, 4, 3, 2, 1]
 *
 */

#include <stdio.h>
#include <assert.h>

/*-----------------------------------------*/
//YOUR CODE HERE

void flipArray( int * array, int size ){

}

/*-----------------------------------------*/

int main(){

   int a[ 6] = {1, 2, 3, 4, 5, 6};
   int b[10] = {9, 2, 6, 5, 7, 8, 3, 1, 0, 4};
   int c[ 5] = {5, 10, 13, 15, 3};
   int d[ 1] = {3};

   flipArray( a, 6);
   flipArray( b,10);
   flipArray( c, 5);
   flipArray( d, 1);

   assert( a[0] == 6);
   assert( a[1] == 5);
   assert( a[2] == 4);
   assert( a[3] == 3);
   assert( a[4] == 2);
   assert( a[5] == 1);

   assert( b[0] == 4);
   assert( b[1] == 0);
   assert( b[2] == 1);
   assert( b[3] == 3);
   assert( b[4] == 8);
   assert( b[5] == 7);
   assert( b[6] == 5);
   assert( b[7] == 6);
   assert( b[8] == 2);
   assert( b[9] == 9);

   assert( c[0] == 3);
   assert( c[1] ==15);
   assert( c[2] ==13);
   assert( c[3] ==10);
   assert( c[4] == 5);

   assert( d[0] == 3);


   printf("All tests passed, you are awesome :)");

   return 0;

}
