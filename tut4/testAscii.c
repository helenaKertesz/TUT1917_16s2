#include <stdio.h>
#include <stdlib.h>

int isDigit( char ch );
int isLower( char ch );
char toUpper( char ch );

int main(){
   char charIn;
   printf("Enter some character: ");
   scanf("%c", &charIn);

   if( isDigit( charIn ) ){
      printf("%c is a digit\n", charIn);
   }

   if( isLower( charIn ) ){
      printf("%c is a lower case letter\n", charIn );

      char charUpper = toUpper( charIn );
      printf("%c -> %c\n", charIn, charUpper );
   }

   return 0;
}



// Equivalent to the ctype.h fution isdigit();
int isDigit( char ch ){

   return 1;
}



// Equivalent to the ctype.h fution islower();
int isLower( char ch ){

   return 1;
}



// Equivalent to the ctype.h fution toupper();
char toUpper( char ch ){

   return 'a';
}
