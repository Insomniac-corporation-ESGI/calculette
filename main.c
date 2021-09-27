#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <math.h>
// #include <stdarg.h>

// personnal libs
//#include "./lib/lib_eso.h" // stands for eval Stack Operations
#include "./lib/lib_mso.h" // stands for memory Stack Operations

// switch case function
double switchCases(char splited, double nbrB, double nbrA){

	switch(splited){

		case '+':
			return nbrA + nbrB;		
			break;
		case '-':
			return nbrA - nbrB;
			break;
		case '/':
			return nbrA / nbrB;
			break;
//		case 'q':
//			return quo(nbrA,nbrB);

		case '%':
			return fmod(nbrA, nbrB);
			break;
		case 's':
			return sqrt(nbrA);
			break;
		case 'p':
			return pow(nbrA,nbrB);
			break;
		case 'a':
			return fabs(nbrA);
			break;
		default:
			return EXIT_FAILURE;
			break;
	}
}

// choice process 
void choiceProcess(char *stack){	
	// TODO: Process how to get past the stack

	char * splited = strtok(stack, " ");
	
	Stack * headStack = NULL;
	

	while(splited != NULL){
		
		if ((stack[0] >= '0' && stack[0] <= '9') 
			|| (stack[0] == '-' &&  stack[1] >= '0' && stack[1] <= '9' )){
		
			*splited = '\0';

			push(&headStack, atof(stack));

			*splited = ' ';
			
		} else {
		
			push(&headStack, switchCases(*stack, pop(&headStack), pop(&headStack)));

		}
		
		stack = splited+1;
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

