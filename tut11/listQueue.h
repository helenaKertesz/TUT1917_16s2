/*
 * This is the header file for a linked
 * list implementation of a queue.
 */

// Node Struct
typedef struct node* Lnode;
struct node{
   int val;
   Lnode next;
};

// Queue struct
typedef struct _queue* Queue;
struct _queue{
   Lnode head;
   int num_nodes;
};

// TUT 11 Functions
Queue createQueue(void);
void enqueue(Queue q, int val);
void dequeue(Queue q);

// Useful Functions Provided
Lnode newNode(int value);
void printQueue(Queue q);


