/*
 * This file contains the functions for use
 * in a linked list inplementation of a queue.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "listQueue.h"
#include <assert.h>

/********************************* TUT 11  *******************************/
Queue createQueue(void){
   Queue q;
   q->head = NULL;
   q->num_nodes = 0;
   return q;
}

void enqueue(Queue q, int val){
   Lnode n = newNode( val );

   Lnode curr = q->head;
   Lnode next = curr->next;
   curr->next  = n;
   n->next = next;

   q->num_nodes++;
}

void dequeue(Queue q){
   printf("> %d\n", q->head->val );
   q->head = q->head->next;
}

/********************************* USEFUL ********************************/

// dynamically allocates new node and initialise it.
Lnode newNode(int value){
   Lnode n = malloc(sizeof(struct node));
   assert(n != NULL);
   n->val = value;
   n->next = NULL;
   return n;
}

//  This function prints out the list
void printQueue(Queue q){

   assert ( q != NULL );
   Lnode current = q->head;
   while( current != NULL ){
      printf("[%d] -> ", current -> val);
      current = current -> next;
   }
   printf("X\n");
}
