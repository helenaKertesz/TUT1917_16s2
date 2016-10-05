/*
 * This program tests functions from a linked list
 * implementation
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

// Funcction Prototypes
void testList();
void testPrepend();
void testAppend();
//void testPrintList();
void testDeleteNode();
void testConcat();
void testShuffleMerge();
void testReverse();
void testSwap();

int main(){
   testList();
   return 0;
}

void testList(){
   //printf("********* TESTING PREPEND *********\n");
   //testPrepend();
   printf("********* TESTING APPEND *********\n");
   testAppend();
   printf("********* TESTING DELETE NODE *********\n");
   testDeleteNode();
   printf("********* TESTING CONCAT  *********\n");
   testConcat();
   printf("********* TESTING SHUFFLEMERGE *********\n");
   testShuffleMerge();
   printf("********* TESTING REVERSE *********\n");
   testReverse();
   printf("********* TESTING SWAP *********\n");
   testSwap();
}

void testPrepend(){
}

void testAppend(){
   List myList = newList();
   printList( myList );

   printf("\n Appending 1\n");
   append( myList, newNode(1) );
   printList( myList );

   printf("\n Appending 2\n");
   append( myList, newNode(2) );
   printList( myList );

   printf("\n Appending 3\n");
   append( myList, newNode(3) );
   printList( myList );

   printf("\n Appending 4\n");
   append( myList, newNode(4) );
   printList( myList );

   printf("\n Appending 5\n");
   append( myList, newNode(5) );
   printList( myList );
}

void testDeleteNode(){
   List myList = newList();
   append( myList, newNode(1) );
   append( myList, newNode(2) );
   append( myList, newNode(3) );
   append( myList, newNode(4) );
   append( myList, newNode(5) );
   printf("ORIGINAL LIST\n");
   printList( myList );

   printf("\nDELETING 3 (middle node)\n");
   deleteNode( myList, 3 );
   printList( myList );

   printf("\nDELETING 5 (last node)\n");
   deleteNode( myList, 5 );
   printList( myList );

   printf("\nDELETING 1 (first node)\n");
   deleteNode( myList, 1 );
   printList( myList );

   printf("\nDELETING 6 (not in list)\n");
   deleteNode( myList, 6 );
   printList( myList );

   printf("\nDELETING 2 (first node)\n");
   deleteNode( myList, 2 );
   printList( myList );

   printf("\nDELETING 4 (one node list)\n");
   deleteNode( myList, 4 );
   printList( myList );

   printf("\nDELETING 4 (empty list)\n");
   deleteNode( myList, 4 );
   printList( myList );
}

void testConcat(){
}

void testShuffleMerge(){
   List l = newList();
   append( l, newNode(1) );
   append( l, newNode(3) );
   append( l, newNode(5) );

   List m = newList();
   append( m, newNode(1) );
   append( m, newNode(3) );
   append( m, newNode(5) );

   printf("ORIGINAL LISTS\n");
   printList( l );
   printList( m );


   shuffle_merge( l,  m);
   printf("SHUFFLED LIST\n");
   printList( l );

}

void testReverse(){
   List myList = newList();
   append( myList, newNode(1) );
   append( myList, newNode(2) );
   append( myList, newNode(3) );
   append( myList, newNode(4) );
   append( myList, newNode(5) );
   printf("ORIGINAL LIST\n");
   printList( myList );

   reverse( myList );
   printf("REVERSED LIST\n");
   printList( myList );

}

void testSwap(){
   List myList = newList();
   append( myList, newNode(1) );
   append( myList, newNode(2) );
   append( myList, newNode(3) );
   append( myList, newNode(4) );
   append( myList, newNode(5) );
   printf("ORIGINAL LIST\n");
   printList( myList );

   swap( myList );
   printf("SWAPPED LIST\n");
   printList( myList );

}
