#include "queue_er.h"

//Create a new queue
queue* newQueue(){
	queue* new;
	new = (queue*)malloc(sizeof(queue));
	new->in = NULL;
	new->out = NULL;
	new->count = 0;
	return new;
}

//Insert an element in the end of the queue
void queueInsert(queue* head,void value){
	if(head->element == 0){
		node* new;
		new = newNode(value);
		head->in = new;
		head->out = new;
		head->count++;
	}
	else{
		node* new;
		new = newNode(value);
		head->in->next = new;
		head->in = new;
		head->count++;
	}
}

//Pops the first element out of the queue
//Returns its value
int queueDequeue(queue* head){
	int n;	
	node* p;
	p = head->out;
	head->out = p->next;
	n = p->type;
	free(p);
	return n;
}

//Destroys the Queue
void destroyQueue(queue* head){
	node* dell;	
	node* p;
	p = head->out;
	dell = p;
	while(p != NULL){
		p = p->next;
		free(dell);
		dell = p;
	}
	free(head);
}

//Searches for a value in the queue
//Returns a '1' if exists; returns '0' otherwise
int searchQueue(queue* head, int value){
	node* p;
	p = head->out;
	while(p != NULL){
		if(p->type == value) return 1;
		else{
			p = p->next;
		}
	}
	return 0;
}

