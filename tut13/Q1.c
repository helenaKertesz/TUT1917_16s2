#include <stdio.h>
#include <stdlib.h>

int main(){
   int x = 1;
   int y = 2;
   int z = 3;
   if (x < y) {
      if (y > 4) {
         z = 5;
      } else {
         z = 6;
      }
   }

   printf("z = %d\n", z);

   return 0;
}
