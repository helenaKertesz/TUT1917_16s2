/*
 * This file contains the functions for use
 * in a linked list.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <assert.h>

// dynamically allocates new node and initialise it.
Lnode newNode(int value){
   Lnode n = malloc(sizeof(struct node));
   assert(n != NULL);
   n->val = value;
   n->next = NULL;
   return n;
}

// prepends new node to an existing list.
Lnode prepend(Lnode head, Lnode newNode){
   newNode->next = head;
   head = newNode;
   return head;
}

// appends new node to an existing list.
Lnode append(Lnode head, Lnode newNode){
   if(head == NULL){ //empty list case
      head = newNode;
   }else{ // all other cases
      Lnode curr = head;
      while(curr->next != NULL){
         curr = curr->next;
      }
      curr->next = newNode;
   }
   return head;
}

// prints existing list.
void printList(Lnode head){
   Lnode current = head;
   while( current != NULL ){
      printf("%d\n", current -> val);
      current = current -> next;
   }
}

// removes the first occurence of val in a list.
Lnode deleteNode(Lnode head, int val){
   Lnode curr = head;
   if( curr == NULL ){ // do nothing in the case  of an empty list

   }
}

// concatenates two linked lists L and M into a single list containing
// all the nodes of L (in their original order) followed by all the nodes
// of M (in their original order) and returns a pointer to the head of the new list.
Lnode  concat( Lnode L, Lnode M ){
   return L;
}

// reverses the nodes of a linked list, so that the ordering of the nodes becomes
// exactly the opposite of what it was before. The function should return
// a pointer to the head of the new list.
Lnode reverse( Lnode head ){
   return head;
}
