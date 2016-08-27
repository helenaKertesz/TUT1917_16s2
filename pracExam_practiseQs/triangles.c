/*
 * Write a progam that given a triangle width and a letter
 * will print out a traingle made of uppercase letters starting at that
 * letter aand going in accending alphabetical order
 *
 * If the letter given is lowercase it should convert it to uppercase
 * The code in main already does error handling for if the input is not a letter
 *
 * ie:
 * INPUT: 6 G
 *
 * OUTPUT:
 *
 * GHIJKL
 * MNOPQ
 * STU
 * VW
 * X
 *
 * INPUT: 4 X
 *
 * XYZA
 * BCD
 * EF
 * G
 *
 */

#include <stdio.h>
#include <ctype.h>

/*-----------------------------------------*/
//YOUR CODE HERE

void printTriangle( char letter, int size ){

}

/*-----------------------------------------*/

int main(){

   int size;
   char letter;

   printf("Enter size of Triangle: ");
   scanf("%d", &size);
   printf("Enter Letter to Start on: ");
   getchar(); //gets rid of newline
   letter = getchar();
   printf("You entered %d and %c\n", size, letter);

   if( isalpha(letter) ){
      printTriangle( letter, size);
   } else {
      printf("Invalid Input - Not a letter\n");
   }

   return 0;
}
