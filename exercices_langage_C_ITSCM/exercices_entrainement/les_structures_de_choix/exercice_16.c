/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_16.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 13:19:40                                             */
/*   Updated: 2025/02/02 07:55:00                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* 
	
	*-----------------------*
 	| strictement croissant |
	*-----------------------*
	
	Lire deux nombres entiers et déterminer s’ils sont rangés ou non par ordre strictement croissant.

*/

int main(){

	// Déclaration des variables
	int nombre1, nombre2;

	// Instructions
	printf("Veuillez entrer deux nombres entiers\n\n");

	// Input
	scanf("%d %d", &nombre1, &nombre2);

	if(nombre1 < nombre2){
		printf("\n\n%d et %d sont strictement croissant \n\n", nombre1, nombre2);
	}
	else if(nombre1 > nombre2){
		printf("\n\n%d et %d ne sont pas croissant \n\n", nombre1, nombre2);
	}
	else if(nombre1 == nombre2){
		printf("\n\n%d et %d sont égaux \n\n", nombre1, nombre2);
	}
	else{
		printf("\n\nIl semble qu'il y ai une Erreur \n\n");
	}

	return 0;
}
