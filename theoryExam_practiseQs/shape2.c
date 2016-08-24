#include<stdio.h>
#include<stdlib.h>

// draw the printout for this program :)

#define XSIZE 6
#define YSIZE 6

int main(){

    int x = 0;
    int y = YSIZE;

    while( y > 0 ){
        x = 0;
        while( x < XSIZE ){
            if( y != 0 && x % y ){
                printf("-");
            } else {
                printf("#");
            }
            x++;
        }
        printf("\n");
        y--;
    }

    return 0;
}
