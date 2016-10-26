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

List newList();
Lnode newNode(int value);
void append( List l, Lnode newNode );
void printList(List l);


int length(List l);
int lengthRecursive(Lnode n);


int search(List l, int val);
int recursiveSearch(Lnode n, int val);
