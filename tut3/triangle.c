#include <stdio.h>

int main( void ) 
{
  int num;
  int row, col;
  // Obtain input
  printf("Enter number: ");
  scanf("%d", &num);

  for(row = 0; row < num; row++) {
	 for(col = 0; col < num; col++) {
		if(col < num-row){
		  printf("*");
		} else {
		  printf(" ");
		}
    }
    printf("\n"); // Start a new line
  }

  return 0;
}
