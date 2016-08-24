//Given an odd number 1<= n <= 15 print a diamond of max with n.
//comile with gcc -Wall -Werror -o dia diamond.c
//
//ie.
//output from ./dia 5
//  *
// ***
//*****
// ***
//  *
//
//output from ./dia 7
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
//
//output from ./dia 1
//*

#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

/*-----------------------------------------*/
//YOUR CODE HERE

void printDiamond( int size ){
    int x, y;
    for( x = 0; x < size; x++){
        for( y = 0; y < size; y++){
            if( ( (x + y) >= (size-1)/2) && ((x + y) <= (size-1)+((size-1)/2) ) && (abs( x - y) <= (size-1)/2) ){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*-----------------------------------------*/

int main( int argc, char * argv[]){
    assert( argc == 2 && atoi(argv[1])%2 && atoi(argv[1]) >= 1 && atoi(argv[1]) <=15 );
    printDiamond( atoi( argv[1] ) );
    return 0;
}
