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
