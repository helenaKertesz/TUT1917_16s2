#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE 1
#define SIZE 10


int find_in_grid( int x, int grid[SIZE][SIZE], int size);
void fill_grid(int grid[SIZE][SIZE], int size);
void print_grid(int grid[SIZE][SIZE], int size);

int main(int argc, char *argv[]) {

   int grid[SIZE][SIZE] = {0};
   int locate = 0;
   fill_grid(grid,SIZE);
   print_grid(grid,SIZE);

   printf("Enter a number to locate: ");
   scanf("%d", &locate);

   if( find_in_grid(locate, grid, SIZE) ){
      printf("Number found\n");
   } else {
      printf("Number not found\n");
   }
   return EXIT_SUCCESS;
}

/*#################### TODO: Write this Function ######################*/

// Searches for a number in the grid
int find_in_grid( int n, int grid[SIZE][SIZE], int size ){

   return 0;
}


/*#####################################################################*/







/* FUNCTIONS FOR MAKING A DISPLAYING THE GRID */

// This function fills in the grid with random numbers
void fill_grid(int grid[SIZE][SIZE], int size){

   if(grid == NULL){
      return;
   }

   int i = 0;
   int j = 0;
   srand(time(NULL));

   while(i < size){
      j = 0;
      while(j < size){
         grid[i][j] = rand() % 107;
         j++;
      }
      i++;
   }
}

void print_grid(int grid[SIZE][SIZE], int size){
   int i = 0;
   int j = 0;

   while(i < size){
      j = 0;
      while(j < size){
         printf("%3d ",grid[i][j]);
         j++;
      }
      printf("\n");
      i++;
   }

}

/* SOLUTIONS
 *

M13A

int find_in_grid( int n, int grid[SIZE][SIZE], int size ){

   int col;
   int row;
   int state = 0;

   for( col = 0; col < size; col++){
      for( row = 0; row < size; row++){
         if(  grid[col][row] == n ){
            state = 1;
         }
      }
   }

   return state;
}

*/
