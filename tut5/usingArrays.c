#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE 8

void displayArray( int * array, int size);

int max_value( int n, int a[] );
int non_decreasing( int n, int a[] );
int findIndex( int n, int a[] , int size);

int main(){

   int array1[] = {1,2,3,4,5,6,7,8};
   int array2[] = {8,7,6,5,4,3,2,1};
   int array3[] = {5,3,8,1,7,2,6,4};

   displayArray( array1, ARRAYSIZE);
   displayArray( array2, ARRAYSIZE);
   displayArray( array3, ARRAYSIZE);

   printf("\nMax Value in Array 1 is %d\n", max_value( ARRAYSIZE, array1 ) );
   printf("Max Value in Array 2 is %d\n", max_value( ARRAYSIZE, array2 ) );
   printf("Max Value in Array 3 is %d\n", max_value( ARRAYSIZE, array3 ) );

   printf("\nArray 1 is non decreasng? - %d\n", non_decreasing( ARRAYSIZE, array1) );
   printf("Array 2 is non decreasng? - %d\n", non_decreasing( ARRAYSIZE, array2) );
   printf("Array 3 is non decreasng? - %d\n", non_decreasing( ARRAYSIZE, array3) );

   printf("\n7 is in index %d in Array 1\n", findIndex( 7, array1, ARRAYSIZE ) );
   printf("7 is in index %d in Array 2\n", findIndex( 7, array2, ARRAYSIZE ) );
   printf("7 is in index %d in Array 3\n", findIndex( 7, array3, ARRAYSIZE ) );

   return 0;
}


//Searches for and return  the maximum value in an array.
int max_value( int n, int a[] ){
   int max = a[0];
   int i = 0;
   while(  i < n ){
      if( a[i] > max){
         max = a[i];
      }
      i++;
   }
   return max;
}


//Return 1 if all the elements of an array are in increaing order and 0 otherwise
int non_decreasing( int n, int a[] ){

   return 0;
}

// This function find the index of a number in an array and returns it
// Will return -1 if the number doesn't exit  in the array
int findIndex( int n, int a[], int size){

   return 0;
}


void displayArray( int * array, int size){
   int i;
   printf("{");
   for( i = 0; i < size; i++){
      printf(" %d", array[i]);
   }
   printf(" }\n");
}
