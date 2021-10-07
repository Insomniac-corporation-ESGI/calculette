#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// personnal libs
#include "./lib/lib_eso.h" // stands for eval Stack Operations
#include "./lib/lib_mso.h" // stands for memory Stack Operations

// switch case function
double switchCases(char splited, double nbrB, double nbrA){
	
	switch(splited){

		case '+':
			return add(nbrA, nbrB);		
		
		case '-':
			return sub(nbrA, nbrB);
		
		case '/':
			return divide(nbrA, nbrB);

		case '*':
		case 'x':
			return mul(nbrA, nbrB);
		
		case '%':
			return mod(nbrA, nbrB);
		
		case 's':
			return sqr(nbrB);
		
		case 'p':
			return powr(nbrA, nbrB);
		
		case 'a':
			return abst(nbrB);
	}
	
	return 0;
}

// choice process 
void choiceProcess(char *stack){	

	char * splited = strtok(stack, " ");
	
	Stack * headStack = NULL;

	while(splited != NULL){
		
		if ((splited[0] >= '0' && splited[0] <= '9') 
			|| (splited[0] == '-' &&  splited[1] >= '0' && splited[1] <= '9' )){
		
			push(&headStack, atof(splited));
			
		} else {
			if(splited[0] != 'a' && splited[0] != 's'){
				double b = pop(&headStack);
				double a = pop(&headStack);
				push(&headStack, switchCases(*splited, b, a));
			} else {
				push(&headStack, switchCases(*splited, pop(&headStack), 0));
			}
		}
		
		splited = strtok(NULL, " \0");

	}

	fprintf(stdout, "%lf", headStack->value);

	freeStack(headStack);
}

int main(void){


	char *stack;

	stack = malloc(sizeof(char) * 512 + 1);

	if (stack == NULL){
		fprintf(stderr, "Out of memory error, exiting...");
		return EXIT_FAILURE;
	}

	// clean terminal using a syscall
	if(system("clear"))
		fprintf(stderr, "failed to clear terminal screen!");

	// creating the stack for the RPN, or NPI in french
	if(!fgets(stack, sizeof(char) * 512, stdin)) 
		fprintf(stderr,"failed to capture stdin");
	// RPN processing
	choiceProcess(stack);

	free(stack);
	return EXIT_SUCCESS;
}

