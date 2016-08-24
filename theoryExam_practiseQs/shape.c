/*
 * draw the print-out for this function
 * Written by Helena Kertesz
 * 5th May 2016
 *
 */

#include<stdio.h>
#include<stdlib.h>

#define SIZE    12

int main(){

    int x = 0;
    int y = 0;

    while( x < SIZE ){
        y = SIZE - x;
        while( y < SIZE ){
            printf("*");
            y++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
