/*
 * This program tests functions from a linked list
 * implementation
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "listQueue.h"
//#include "arrayQueue.h"

// Function Prototypes
void testList();
void testEnqueue();
void testDequeue();

int main(){
   testList();
   return 0;
}

// Calls all the testing functions
void testList(){
   printf("********* TESTING ENQUEUE *********\n");
   testEnqueue();
   printf("********* TESTING DEQUEUE *********\n");
   testDequeue();
}

// Tests the enqueue function
void testEnqueue(){
   Queue myQueue = createQueue();

}

// Tests the dequeue function
void testDequeue(){

}

