#include <stdlib.h>
#include <stdio.h>
#include <stderr.h>
#include <stdint.h>
#include <stdarg.h>

// personnal libs
#include "lib_eso.h" // stands for eval Stack Operations
#include "lib_mso.h" // stands for memory Stack Operations

// eso prototypes


void getChoice(char *stack){
	// TODO: Process how to get past the stack
}

int main(int32_t argc, char *argv[]){


	int8_t

	if ( argc != 1 ){
		fprintf(STDERR, "merci de ne pas entrer d'arguments");
		return (-1);
	}

	// clean terminal using a syscall
	system("clear");

	// creating the stack for the RPN, or NPI in french
	fscanf(STDIN, &stack);
	// RPN processing
	choiceProcess(stack);
}

