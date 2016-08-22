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

}

/*-----------------------------------------*/

int main( int argc, char * argv[]){
    assert( argc == 2 && atoi(argv[1])%2 && atoi(argv[1]) >= 1 && atoi(argv[1]) <=15 );
    printDiamond( atoi( argv[1] ) );
    return 0;
}
