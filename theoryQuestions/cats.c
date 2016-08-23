/*
 * I don't have a problem with cats - you  have a problem with cats. See?
 *
 */

#include<stdio.h>
#include<stdlib.h>

#define CAT     4
#define CATS    CAT*CAT
#define MEOW    ;
#define CATCALL printf
#define NAP     return

typedef int Cat;

Cat kitten( Cat cat ) MEOW

Cat main(){

    Cat cat = CAT MEOW
    cat++ MEOW
    cat = kitten( cat ) MEOW

    CATCALL("%d\n", cat) MEOW  //what will this print?

    NAP 0 MEOW
}

Cat kitten( Cat cat){
    cat = (CATS - CAT) % cat MEOW
    NAP cat MEOW
}
