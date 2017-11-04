#ifndef QUEUE_ER
#define QUEUE_ER

#include "generic_list.h"

typedef struct queue_head {
	int count; 			//number of elements of the queue	
	node* in;	  		//pointer to the last element
	node* out;	  		//pointer to the first element
} queue;

//Create a new queue
//returns a pointer to its head
queue* newQueue();

//Insert a node at the end of the queue
void queueInsert(int value);

//Pops the first element out of the queue out
//Returns its value
int queueDequeue(queue* head);

//Destroys the Queue
void destroyQueue(queue* head);

//Searches for a valeu in the queue
//Returns a '1' if exists; returns '0' otherwise
int searchQueue(queue* head, int value);

#endif
