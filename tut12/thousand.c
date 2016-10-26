#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 60

int main( int argc, char * argv[]){



   int min = atoi(argv[1]);
   int max = atoi(argv[2]);

   FILE * fp;
   fp = fopen("cats.txt", "r");

   fgets(....)

   fclose(fp);
   return 0;
}

// reading - error checking?
