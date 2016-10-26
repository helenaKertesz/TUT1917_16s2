/*
 * This file contains the functions for use
 * in a linked list.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <assert.h>

/********************************* LAB 12 *********************************/

// Write a recursive function to calculate the length of a linked list
int length(List l){
   int length = lengthRecursive( l->head );
   return length;
}

int lengthRecursive( Lnode l ){
   if( /* base case */ ){
      return 0;
   } else {
      lengthRecursive( l->next)
      return 0;
   }
}


//Write a recursive function  that returns 1 if val is in the linked list and 0 otherwise.
int search(List l, int val){
   int inList = recursiveSearch( l->head, val );
   return inList;
}

int recursiveSearch(Lnode n, int val){
   if( /* base case */ ){
      return 0;
   } else {
      return 0;
   }
}

/**************************************************************************/

// This function returns a new List Struct
List newList(){
   List newList = malloc( sizeof( struct list ) );
   assert( newList != NULL );
   newList->numNodes = 0;
   newList->head = NULL;
   return newList;
}

// dynamically allocates new node and initialise it.
Lnode newNode(int value){
   Lnode n = malloc(sizeof(struct node));
   assert(n != NULL);
   n->val = value;
   n->next = NULL;
   return n;
}

// This function appends a node to the list
void append( List l, Lnode newNode ){

   assert( l != NULL);
   if(l->head == NULL){  //empty list case
      l->head = newNode;
   } else {             // all other cases
      Lnode curr = l->head;
      while(curr->next != NULL){
         curr = curr->next;
      }
      curr->next = newNode;
   }
}

//  This function prints out the list
void printList(List l){

   assert ( l != NULL );
   Lnode current = l->head;
   while( current != NULL ){
      printf("[%d] -> ", current -> val);
      current = current -> next;
   }
   printf("X\n");
}
