
// mso memory stack operation

#include "../lib/lib_mso.h"

// where the operation on the stack zill be proceed, such as pop, push, and functions to check if the formula is valid 

// structure for the RPN

// adding at the Head of the stack a new value ( i.e when the user did an sum
// TODO: faire exemple
//
//
//

/* 
 

*/

void push(Stack ** stack, double newVal){

	Stack *newStackHead = malloc(sizeof(Stack));
	

	if ( newStackHead == NULL) {

		fprintf(stderr, "not enough memory for new stack allocation, exiting...");
		exit(EXIT_FAILURE);
	}
		
	newStackHead->prev = *stack;

	newStackHead->value = newVal;

	* stack = newStackHead;
}

// can return the element of the stack you decided to take out
// getting the actual value of the stack we sent
// then temporaly storing the mem @ of the stackHead
// then affecting the Head of the stack the previous one

/* 
	example

stack	0<1<2<3<4

	newval = 4

	temp  = @4

	stack = @3

	free(temp}

	return newva;

new stack 0<1<2<3

*/

double pop(Stack ** stack){

	double newVal = (*stack)->value;
	
	Stack *stackTemp = *stack;

	*stack = (*stack)->prev;

	free(stackTemp);

	return newVal;

}

int freeStack(Stack * stack ){

	if (stack != NULL ) {

		Stack * stackTemp = stack->prev; 

		free(stack);
 
		return freeStack(stackTemp);
	}
	return EXIT_SUCCESS;
}
