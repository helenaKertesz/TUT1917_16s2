/*
 * This is the header file for a linked
 * list implementation.
 * There are two different data structures
 * represented here, one with just nodes,
 * and one with nodes AND a list struct.
 *
 */

// Simple Node Data Structure

typedef struct node* Lnode;

struct node{
   int val;
   Lnode next;
};

// List struct data structure

typedef struct list* List;

struct list{
   Lnode head;
   int numNodes;
};




// Function Prototypes LAB 9
Lnode newNode(int value);
//Lnode prepend(Lnode head, Lnode newNode);
//Lnode append(Lnode head, Lnode newNode);
//void  printList(Lnode head);
//Lnode deleteNode(Lnode head, int val);
//Lnode concat( Lnode L, Lnode M );
//Lnode reverse( Lnode head );

// Function Prototypes LAB 10
List newList();
void append( List l, Lnode newNode );
void printList(List l);
void deleteNode(List l, int val);
void shuffle_merge(List l, List m);
void reverse(List l);
void swap(List l);

