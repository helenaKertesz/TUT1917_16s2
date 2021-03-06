/*
 * This file contains the functions for use
 * in a linked list.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <assert.h>

/********************************* LAB 9 *********************************/

// dynamically allocates new node and initialise it.
Lnode newNode(int value){
   Lnode n = malloc(sizeof(struct node));
   assert(n != NULL);
   n->val = value;
   n->next = NULL;
   return n;
}


/*
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
*/




/********************************* LAB 10 ********************************/

// This function returns a new List Struct
List newList(){
   List newList = malloc( sizeof( struct list ) );
   assert( newList != NULL );
   newList->numNodes = 0;
   newList->head = NULL;
   return newList;
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


void deleteNode(List l, int val){

   // Empty List
   if( l->head != NULL){

      // One node list
      if( l->head->next == NULL && l->head->val == val ){
         free(l->head);
         l->head = NULL;
         l->numNodes = 0;
         // Deleting first node
      } else if( l->head->val == val ){
         Lnode temp = l->head;
         l->head = l->head->next;
         free(temp);
         l->numNodes--;
      } else {
         // Every other case
         Lnode temp = l->head;
         while( temp->next != NULL && temp->next->val != val ){
            temp =  temp->next;
         }

         if( temp->next != NULL){
            Lnode toDelete = temp->next;
            temp->next = toDelete->next;
            free( toDelete );
         }
      }
   }
}


void shuffle_merge(List l, List m){

}


void reverse(List l){

}


void swap(List l){

}
