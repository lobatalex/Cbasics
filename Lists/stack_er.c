#include "stack_er.h"

//Creates a new stack
stack* newStack(){
	stack* new;
	new = (stack*)malloc(sizeof(stack));
	stack->count = 0;
	stack->top = NULL;
	return new;
}

//Insert an element at the top of the stack
void insertStack(stack* head, int value){
	node *new;
	new = newNode(value);
	head->count += 1;
	new->next = head->top;
	head->top = new;
}

//Pop the top element out of the stack
//Also return it's value
int popStack(stack* head){
	int n;
	node* p;
	p = head->top;
	head->top = p->next;
	n = p->type;
	free(p);
}

//Delete the stack and all it's remaining elements
void destroyStack(stack* head){
	node* dell;
	node* p;
	p = head->top;
	dell = p;
	while (p != NULL){
		p = p->next;
		free(dell);
		dell = p;
	}
	free(head);
}
