/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_18.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 13:44:48                                             */
/*   Updated: 2024/12/15 13:44:48                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

/* 
	
	*--------------------*
 	| Positif ou négatif |
	*--------------------*
	
	Ecrire un algorithme qui demande un nombre à l’utilisateur, et l’informe ensuite si ce nombre est positif ou
	négatif (on laisse de côté le cas où le nombre vaut zéro).
	
*/

int main(){
	
	// déclaration de la varible
	int nombre;

	// Instructions
	printf("\n\nVeuillez entrer un nombre entier positif ou négatif \n\n");

	// Input
	scanf("%d", &nombre);

	// Verification des égalités
	if(nombre < 0){
		printf("\n\n%d est négatif\n\n", nombre);
	}
	else{
		printf("\n\n%d est positif\n\n", nombre);
	}


	return 0;
}
