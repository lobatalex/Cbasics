#include "generic_list.h"

node* newNode(int value){
	node* new;
	new = (node*)malloc(sizeof(node));
	new->type = value;
	new->next = NULL;
	return new;
}
