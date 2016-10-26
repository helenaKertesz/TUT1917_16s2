/*
 * There are two errors in the code that the compiler will not catch. Find and correct them.
 *
 * This program takes in how many cats  there are initally, finds how many cats there
 * will be after each pair has had a litter of kittens, and then prints out how many
 * toe beans there will be in total.
 * (sorry not sorry about the cats. If you don't know what toe beans are then look them up.)
 *
 * Written by Helena Kertesz
 * May 6th 2016
 */

#include<stdio.h>
#include<stdlib.h>

#define TOE_BEANS   16
#define LITTER_SIZE 4

void numBeans( int cats, int * toeBeans );
void numCats( int cats);

int main(){

    int cats;
    printf("How many cats?\n");
    scanf("%d", &cats);

    int * toeBeans = 0;
    numBeans( cats, toeBeans );

    printf("%d toe beans\n", *toeBeans);

    return 0;
}


//calculates how many toe beans there will be
void numBeans( int cats, int * toeBeans ){
    numCats( cats );
    *toeBeans = cats*TOE_BEANS;
}


//calculates how many cats there will be given that each pair of cats has a litter of a certain size.
void numCats( int cats){
    cats = cats + (cats/2)*LITTER_SIZE;
}


/*
 * ANSWERS:
 *
 * 1) initialising "int * toeBeans = 0;" sets the pointer pointing to zero (NULL) rather than seting the value stored at that location to zero.
 *    When the program tries to change what is stored at this pointer (*toeBeans = cats*TOE_BEANS*4) it is trying to change what is at NULL,
 *    which causes a seg fault.
 *
 *    This could be rectified by initialising "int toeBeans = 0;" and passing &toeBeans (pointer to toeBeans) to numBeans.
 *    Since toeBeans is calculated using the number of cats and not the initial numbber of toebeans, it could also be declared as just int toeBeans;
 *    You could also do "int toeBeans = 0; int * locationToeBeans = &toeBeans" and then pass numBeans locationToeBeans but that kinda icky.
 *
 * 2) There's another issue that won't cause a seg fault (the program will still run fine with it) but will cause the number of cats to be incorrect (noo!!).
 */
