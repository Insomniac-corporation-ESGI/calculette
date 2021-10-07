#include <stdlib.h>
#include <stdio.h>

typedef struct s_Stack {

	struct s_Stack * prev;
	double value;

} Stack;

void push(Stack ** stack, double newVal);

double pop(Stack ** stack);

int freeStack(Stack * stack);
