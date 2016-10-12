/*
 * This file contains the functions for use
 * in an array inplementation of a queue.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrayQueue.h"
#include <assert.h>

/********************************* TUT 11 *******************************/
Queue createQueue(void){
   Queue q = malloc( sizeof( struct _queue));
}

void enqueue(Queue q, int val){
   Lnode n = newNode();
   array[num_nodes] = n;
   q->num_nodes++;
}

void dequeue(Queue q){
   printf("> %d\n", array[0]);
}

/********************************* USEFUL ********************************/

//  This function prints out the list
void printQueue(Queue q){

   assert ( q != NULL );
   int i;

   for( i = 0; i < q->num_nodes; i++ ){
      printf("[%d] -> ", q->array[i] );
   }
   printf("X\n");
}
