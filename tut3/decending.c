#include <stdio.h>

int main(){
	int first, second, third;
	printf("Enter numbers: ");
	scanf("%d %d %d", &first, &second, &third);

/******************Your code here***********************/

	if(first < second && second < third){
		printf("This is in ascending order\n");
	}else if(third < second && second < first){
		printf("This is in descending order\n");
	} else {
		printf("Neither accedning or decending\n");
	}

/*******************************************************/
	return 0;
}
