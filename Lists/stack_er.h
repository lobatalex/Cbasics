#ifndef STACK_ER
#define STACK_ER

#include "generic_list.h"

//Abstract data type for a stack
typedef struct stack_head{
	int count;
	node* top;
} stack;

//Creates a new stack
stack* newStack();

//Insert an element at the top of the stack
void insertStack(stack* head, int value);

//Pop the top element out of the stack
//Also return it's value
int popStack(stack* head);

//Delete the stack and all it's remaining elements
void destroyStack(stack* head);

#endif
