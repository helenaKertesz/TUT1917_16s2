#include <stdio.h>


int main( int argc, char * argv[]){
   printf("argc = %d\n", argc);

   for( int i; i < argc; i++){
      printf("argc[%d] = %s\n", i, argv[i]);
   }

   return 0;
}
