#include <stdlib.h>
#include <stdio.h>
#include <stderr.h>
#include <stdint.h>
// #include <stdarg.h>

// personnal libs
#include "lib_eso.h" // stands for eval Stack Operations
#include "lib_mso.h" // stands for memory Stack Operations

// switch case function
double switchCases(int8_t splited, double nbrB, double nbrA){

	switch(splited){

		case '+':
			return add(nbrA,nbrB);

		case '-':
			return sub(nbrA,nbrB);

		case '*':
		case 'x':
			return mul(nbrA,nbrB);

		case '/':
			return div(nbrA,nbrB);

		case '%':
			return mod(nbrA,nbrB);

		case 'q':
			return quo(nbrA,nbrB);

		case 's':
			return sqrt(nbrA,nbrB);

		case 'p':
			return pow(nbrA,nbrB);

		case 'a':
			return fabs(nbrA,nbrB);
	}
}

// choice process 
void choiceProcess(int8_t *stack){	
	// TODO: Process how to get past the stack

	int8_t * splited = strtok(stack, " ");
	
	Stack * headStack = NULL;
	

	while(splited != NULL){
		
		if ((stack[0] >= '0' && stack[0] <= '9') 
			|| (stack[0] == '-' &&  stack[1] >= '0' && stack[1] <= '9' )){
		
			*splited = '\0';

			push(&headStack, atof(stack));

			*splited = ' ';
			
		} else {
		
			push(&headStack, switchCases(*stack, pop(&headStack), pop(headStack)));

		}
		
		stack = splited+1;
		splited = strtok(NULL, " \0");

	}


	fprintf(stdout, "%lf", headStack->value);

	freeStack(headStack);

}

int main(int32_t argc, int8_t *argv[]){


	int8_t *stack;

	stack = malloc(sizeof(int8_t) * 512 + 1);

	if (stack == NULL){
		fprintf(stderr, "Out of memory error, exiting...");
		return EXIT_FAILURE;
	}


	if ( argc != 1 ){
		fprintf(stderr, "merci de ne pas entrer d'arguments");
		return EXIT_FAILURE;
	}

	// clean terminal using a syscall
	system("clear");

	// creating the stack for the RPN, or NPI in french
	fgets(stack, sizeof(int8_t) * 512, stdin) ;
	// RPN processing
	choiceProcess(stack);


	free(stack);
	return EXIT_SUCCESS;
}

