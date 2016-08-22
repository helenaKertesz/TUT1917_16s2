#include <stdio.h>

int main( void ) 
{
  int num;
  int row, col;
  // Obtain input
  printf("Enter number: ");
  scanf("%d", &num);

  for(col = 1; col <= num; col++){
			 printf("*");
  }
  printf("\n");

  for(row = 2; row < num; row++) {
	 for(col = 1; col <= num; col++) {
		if(col == 1 || col == num){
		  printf("*");
		}else{
		  printf(" ");
		}
    }
    printf("\n"); // Start a new line
  }

  for(col = 1; col <= num; col++){
	 printf("*");
  }

  printf("\n");

  return 0;
}
