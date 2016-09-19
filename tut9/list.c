/*
 * This file contains the functions for use
 * in a linked list.
 *
 */

#include <stdio.h>
#include <stdlib.h>
// #include "list.h"

// Simple Node Data Structure
typedef struct node* Lnode;

struct node{
   int val;
   Lnode next;
};

// List struct data structure
/*
 * typedef struct list* List
 *
 * struct list{
 * Lnode head;
 * int numNodes;
 * };
 *
 */

// Function Prototypes
Lnode newNode(int value);
Lnode prepend(Lnode head, Lnode newNode);
Lnode append(Lnode head, Lnode newNode);
void  printList(Lnode head);
Lnode deleteNode(Lnode head, int val);
Lnode concat( Lnode L, Lnode M );
Lnode reverse( Lnode head );

// dynamically allocates new node and initialise it.
Lnode newNode(int value){
   return NULL;
}

// prepends new node to an existing list.
Lnode prepend(Lnode head, Lnode newNode){
   return head;
}

// appends new node to an existing list.
Lnode append(Lnode head, Lnode newNode){
   return head;
}

// prints existing list.
void printList(Lnode head){

}

// removes the first occurence of val in a list.
Lnode deleteNode(Lnode head, int val){
   return head;
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
