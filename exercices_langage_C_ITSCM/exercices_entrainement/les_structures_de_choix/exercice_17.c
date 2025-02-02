/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_17.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 13:43:57                                             */
/*   Updated: 2024/12/15 13:43:57                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

/* 
	
	*----------------------*
 	| égalité mathématique |
	*----------------------*
	
	Lire trois nombres entiers et trouver s’ils sont ou non rangés dans l’ordre strictement croissant, c’est-à-dire
	que, si a, b et c désignent ces nombres, ils devront vérifier l’égalité mathématique : a < b < c.
	
*/

int main(){
	
	// déclaration des variables
	int nombre1, nombre2, nombre3;

	// Instructions
	printf("\n\nVeuillez entrer 3 nombres entiers \n\n");

	// Input
	scanf("%d %d %d", &nombre1, &nombre2, &nombre3);

	// Verification des égalités
	if(nombre1 < nombre2 && nombre2 < nombre3 && nombre1 < nombre3){
		printf("\n\n%d < %d < %d\n\n", nombre1, nombre2, nombre3);
	}
	else if(nombre1 < nombre2 && nombre2 > nombre3 && nombre1 < nombre3){
		printf("%d < %d > %d\n", nombre1, nombre2, nombre3);
		printf("Donc %d < %d < %d\n", nombre1, nombre3, nombre2);
	}
	else if(nombre1 > nombre2 && nombre2 < nombre3 && nombre1 < nombre3){
		printf("%d > %d < %d\n", nombre1, nombre2, nombre3);
		printf("Donc %d < %d < %d\n", nombre2, nombre1, nombre3);
	}
	else if(nombre1 > nombre2 && nombre2 < nombre3 && nombre1 > nombre3){
		printf("%d > %d < %d\n", nombre1, nombre2, nombre3);
		printf("Donc %d < %d < %d\n", nombre2, nombre3, nombre1);
	}
	else if(nombre1 < nombre2 && nombre2 > nombre3 && nombre1 > nombre3){
		printf("%d < %d > %d\n", nombre1, nombre2, nombre3);
		printf("Donc %d < %d < %d\n", nombre3, nombre1, nombre2);
	}
	else if(nombre1 > nombre2 && nombre2 > nombre3 && nombre1 > nombre3){
		printf("%d > %d > %d\n", nombre1, nombre2, nombre3);
		printf("Donc %d < %d < %d\n", nombre3, nombre2, nombre1);
	}
	else{
		printf("Il semble qu'il y ai eu une erreur, ou une égalité, la flemme de finir le programme\n");
	}


	return 0;
}
