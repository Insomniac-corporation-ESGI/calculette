#include <stdlib.h>
#include <stdio.h>
#include <stderr.h>
#include <stdint.h>

// Global Constants
#define TRUE 1
#define FALSE 0


int addition (int *nombreA, int *nombreB){
	return (nombreA + nombreB);
}

int main(int32_t argc, char *argv[]){


	int8_t choix = 0;
	int32_t nombreA, nombreB;
	nombreA = 0;
	nombreB = 0;

	if (argc == 3){
		nombreA = argv[1];
		nombreB = argv[2];
	} else {
		fprintf(STDERR, "Merci de mettre deux arguments lors de l'execution du programme. ex: ./calc 10 20");
      		exit(1);      
	}




	// nettoyage du terminal avec un sys-call
	system("clear");
	// affichage menu je blinde de fprintf, c'est moche mais c'est pas si mal finalement, 
	// je decalerais ca dans une fonction pour alleger le main.
	fprintf(STDOUT, "BONJOUR ET BIENVENUE DANS LA CALCULATRICE\n");
	fprintf(STDOUT, "Merci de selectionner une action a realiser, ou entrez Q ou 0 pour quitter, -1 pour les credits.\n");
	fprintf(STDOUT, "1 - Addition\n");
	fprintf(STDOUT, "2 - Soustraction\n");
	fprintf(STDOUT, "3 - Multiplication\n");
	fprintf(STDOUT, "4 - Division\n");
	fprintf(STDOUT, "\nChoix: ");
	fscanf(STDIN, &choix);

	switch (choix){
		case -1:
			fprintf(STDOUT, "Merci d'utiliser le programme, produtcion par Simon 'astalios' DE BROU, supporte par sagliss.industries"
		//	exit(0);
			break;
		case 0:
			frpintf(STDOUT, "'au revoir', dit Mitterand");
			exit(0);
		case 1:
			fprintf(STDOUT, "%d", addition(nombreA&, nombreB&));
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	
