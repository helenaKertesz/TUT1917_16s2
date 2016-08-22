#include <stdio.h>
#include <stdlib.h>

int main(){
   int i;
   int sum = 0;

   i = getchar();
   while( i != EOF ){
      putchar( i );
      i = getchar();
   }

   return 0;
}
