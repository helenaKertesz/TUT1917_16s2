/*
 * This program fills an array using a function addToArray
 * What will be printed out?
 * Written by Helena Kertesz
 * May 6th 2016
 *
 */

#include<stdio.h>
#include<stdlib.h>

#define ARRAY_LEN 10

void addToArray( int array[ARRAY_LEN], int pos, int num );

int main(){

    int array[ARRAY_LEN] = {0};
    int num = 0;
    int pos = 0;

    addToArray( array, pos, num );

    int i = 0;
    while( i < ARRAY_LEN){
        printf("|%d", array[i]);
        i++;
    }
    printf("|\n");

    return 0;

}


void addToArray( int array[ARRAY_LEN], int pos, int num ){

    if( pos >= 0 && pos < ARRAY_LEN ){
        array[pos] = num;
        addToArray( array, pos + 1, num + pos);
    }
}
