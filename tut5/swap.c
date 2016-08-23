/*
 * This Program takes two numbers aand swaps them using a function
 * to do this pointers must be used
 *
 */

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

/*#################### TODO: Write this Function ######################*/

// This function swaps two numbers using pointers
void swap ( int * first, int * second){

}

/*#####################################################################*/













/* SOLUTIONS
 *
 * M13A
 * void swap ( int * first, int * second){
 *    int temp = *first;
 *    *first = *second;
 *    *second = temp;
 * }
 *
 */
