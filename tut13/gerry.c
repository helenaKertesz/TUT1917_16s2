#include <stdio.h>
#include <stdlib.h>


int main(){

   int local_a;
   char local_myWord[5];
   int local_b;

   int* malloced_c = malloc(sizeof(int));
   int* malloced_d = malloc(sizeof(int));

   printf("local_a - %p\nlocal_myWord - %p\nlocal_myWord[3] - %p\nlocal_b - %p\nmalloced_c - %p\nmalloced_d - %p\n", &local_a, local_myWord, &local_myWord[3], &local_b, malloced_c, malloced_d);

   return 0;
}
