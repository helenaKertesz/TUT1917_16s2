/*
 * This is the header file for an array
 * implementation of a queue.
 */

// Queue struct
typedef struct _queue* Queue;
struct _queue{
   int * array;
   int num_nodes;
};

// TUT 11 Functions
Queue createQueue(void);
void enqueue(Queue q, int val);
void dequeue(Queue q);

// Useful Functions Provided
void printQueue(Queue q);
