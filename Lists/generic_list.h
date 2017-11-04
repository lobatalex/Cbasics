#ifndef GENERIC_LISTS
#define GENERIC_LISTS


//Defines a generic node element for lists
typedef struct element {
	int type;
	struct element* next;
} node;

//Creates a node
//The information stored inside can be added or
//modified depending on the user's needs
node* newNode(int type);

#endif
