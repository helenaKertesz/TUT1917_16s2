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
void testLength();
void testSearch();

int main(){
   testList();
   return 0;
}

void testList(){
   printf("****** testing length *****\n");
   testLength();
   printf("passed!\n");
   printf("****** testing search *****\n");
   testSearch();
   printf("passed!\n");
   printf("All tests passed! You are awesome :)\n");
}

void testLength(){
   List myList = newList();
   append( myList, newNode(1) );
   append( myList, newNode(2) );
   append( myList, newNode(3) );
   append( myList, newNode(4) );
   append( myList, newNode(5) );
   printList( myList );

   int listLength = length( myList );
   printf("List is %d nodes long\n", listLength);
   assert( listLength == 5 );
}

void testSearch(){
   List myList = newList();
   append( myList, newNode(1) );
   append( myList, newNode(2) );
   append( myList, newNode(3) );
   append( myList, newNode(4) );
   append( myList, newNode(5) );
   printList( myList );

   int inList5 = search( myList, 5 );
   printf("5 is in the list: %d\n", inList5);
   assert( inList5 == 1 );
   int inList7 = search( myList, 7 );
   printf("7 is in the list: %d\n", inList7);
   assert( inList7 == 0 );
}
