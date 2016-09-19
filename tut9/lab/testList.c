#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


void testSortedOne(void);
void testSortedFront(void);
void testSortedMiddle(void);
void testSortedBack(void);
void testSortedDuplicates(void);
void testLength(void);
void testSortedInsert(void);
void testInsertAt(void);
void testAtOne(void);    
void testAtFront(void);
void testAtMiddle(void);
void testAtBack(void);

int main(void){

   testLength();
   testSortedInsert();
   testInsertAt();
   return 0;
}


//===========================length function tests ==============================
void testLength(void){
   printf("Testing length function\n");
   Node head = NULL;
   assert(length(head) == 0);
   head = append(head, 1);
   assert(length(head) == 1);
   int i;
   for(i = 0; i < 4; i++){
      head = append(head, i);
   }
   assert(length(head) == 5);
   destroy(head);
   printf("Passed\n");
}
//===========================sortedInsert function tests ==============================

void testSortedInsert(void){
   printf("==========================================\n");
   printf("Testing sorted_insert function\n\n");
   testSortedOne();    
   testSortedFront();
   testSortedMiddle();
   testSortedBack();
   testSortedDuplicates();
}

void testSortedOne(void){
   printf("#########################################\n");
   printf("Testing insert into an empty list\n");
   printf("Expecting:\n");
   printf("[1]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   head = sorted_insert(head,1);
   printList(head);
   destroy(head);
}

void testSortedFront(void){
   printf("#########################################\n");
   printf("Test inserting into the front of the list\n");
   printf("Expecting:\n");
   printf("[0]->[1]->[2]->[3]->[4]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   int i;
   for(i = 1; i < 5; i++){
      head = append(head, i);
   }

   head = sorted_insert(head,0);
   printList(head);
   destroy(head);  
}

void testSortedMiddle(void){
   printf("#########################################\n");
   printf("Test inserting into the middle of the list\n");
   printf("Expecting:\n");
   printf("[1]->[2]->[3]->[4]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   int i;
   for(i = 1; i < 2; i++){
      head = append(head, i);
   }
   i++;

   for(; i < 5; i++){
      head = append(head, i);
   }

   head = sorted_insert(head,2);
   printList(head);

   destroy(head);   
}


void testSortedBack(void){
   printf("#########################################\n");
   printf("Test inserting at the back of the list\n");
   printf("Expecting:\n");
   printf("[1]->[2]->[3]->[4]->[20]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   int i;


   for(i = 1; i < 5; i++){
      head = append(head, i);
   }

   head = sorted_insert(head,20);
   printList(head);
   destroy(head);  
}

void testSortedDuplicates(void){
   printf("#########################################\n");
   printf("Test inserting duplicate element into the list\n");
   printf("Expecting:\n");
   printf("[1]->[2]->[2]->[3]->[4]->[5]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   int i;

   for(i = 1; i < 6; i++){
      head = append(head, i);
   }
   head = sorted_insert(head,2);
   printList(head);
   destroy(head);  
}

//===========================insertAt function tests ==============================
void testInsertAt(void){
   printf("==========================================\n");
   printf("Testing insertAt function\n\n");
   testAtOne();    
   testAtFront();
   testAtMiddle();
   testAtBack();

}

void testAtOne(void){
   printf("#########################################\n");
   printf("Test inserting into empty list\n");
   printf("Expecting:\n");
   printf("[1]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   head = insertAt(head,0,1);
   printList(head);
   destroy(head);
}   
void testAtFront(void){
   printf("#########################################\n");
   printf("Test inserting at position 0\n");
   printf("Expecting:\n");
   printf("[5]->[10]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   head = append(head,10);
   head = insertAt(head,0,5);
   printList(head);
   destroy(head);

}
void testAtMiddle(void){
   printf("#########################################\n");
   printf("Test inserting in the middle\n");
   printf("Expecting:\n");
   printf("[10]->[10]->[5]->[10]->[10]->[10]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   int i;
   for(i = 0; i < 5; i++){
      head = append(head,10);    
   }

   head = insertAt(head,2,5);
   printList(head);
   destroy(head);
}
void testAtBack(void){
   printf("#########################################\n");
   printf("Test inserting at the back\n");
   printf("Expecting:\n");
   printf("[10]->[10]->[10]->[10]->[10]->[5]->X\n");
   printf("Your output:\n");
   Node head = NULL;
   int i;
   for(i = 0; i < 5; i++){
      head = append(head,10);    
   }

   head = insertAt(head,20,5);
   printList(head);
   destroy(head);
}
