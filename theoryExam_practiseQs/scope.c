/*
 * This program explores scope of variables
 * Written by Helena Kertesz
 * May 5th 2016
 *
 */

#include<stdio.h>

int rawr( int c, int b);

int a = 0;

int main(){

    int a = 9;
    int b = 2;
    int c = 7;

    b = rawr(a, b);

    printf("b = %d\n", b); //what will this print?

    return 0;
}

int rawr( int c, int b){
    int d;
    int e = 0;
    d = a + b - c;

    if( c > 0){
        e = rawr(a, d);
    }

    c = c + e;
    printf("a = %d, b = %d, c= %d, d= %d, e = %d\n", a, b, c, d, e);
    return c;
}

/*
 * Below is a method of solving this on paper.
 *
 * I start  by writing down a list of global variibales. I then go into main and make a list of the LOCAL variables in main.
 * Note that a starts out as 0,since it has been declared globaly as 0. The initialisation in main then makes it 9.

 * Global
 * | a = 0
 *
 * Main
 * | a = 0->9
 * | b = 2->rawr(main a, main, b) = 9 -> PRINTS 9 :)
 * | c = 7
 *
 * rawr(1)
 * | a = 0
 * | b = (passed b from main) = 2
 * | c = (passed a from main) = 9 ->(c + e) = 9 -> RETURNS 9 to main
 * | d = ( a + b - c) = -7
 * | e = 0 -> rawr(a, d) = 0
 *
 * rawr(2)
 * | a = 0
 * | b = (passed d from (1)rawr) = -7
 * | c = (passed a from (1)rawr) = 0 ->( c + e) = 0 ->RETURNS 0 to (1)rawr.
 * | d = ( a + b - c ) = -7
 * | e = 0->(c !> 0)->0
 *
 * Note when main calls the function "rawr" I have to make a new set of local variables for rawr (same when rawr calls rawr - I
 * make a new set of local variables called (2)rawr). Each set of variables is in a new stack frame. At one point in this program there will be
 * 3 stack frames are present at one point in this program, each
 *
 * Be careful about the naming of variables as they get passed to new functions. When main calls rawr is passes it what main calls a and b.
 * However, rawr is declared int rawr( int c, int b) -> it iss expecting two integers, and is going to call the frst on 'c' and the second one 'b'.
 *
 * MAIN         RAWR
 *  a  ->value-> c
 *  b  ->value-> d
 */
