#include<stdio.h>
#include<stdlib.h>

#define CATS   4

int main(){

    int S = CATS;
    int cats = C(A(T(S)));
    printf("%d\n", cats);
    return 0;

}

int C( int num){
    int i = 0;
    while( i < CATS){
        num++;
        i++;
    }
    return num;
}

int A( int num){
    num = num/CATS + num % CATS;
    return num;
}

int T( int num){
    num = A( num*num );
    return num;
}
