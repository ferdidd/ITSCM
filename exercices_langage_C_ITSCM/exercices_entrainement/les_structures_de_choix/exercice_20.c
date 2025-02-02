/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_20.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 13:45:32                                             */
/*   Updated: 2024/12/15 13:45:32                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

/* 
	
	*---------------------------------*
 	| Calcule du taux de TVA et remise|
	*---------------------------------*
	
	Écrire un programme qui lit un prix hors taxe et qui calcule et affiche le prix TTC correspondant (avec un taux
	de TVA de 21%). L’exécutant-ordinateur établit ensuite une remise dont le taux est le suivant :
		- 0% pour un montant TTC inférieur à 1500 euros,
		- 1% pour un montant TTC supérieur ou égal à 1500 euros et inférieur à 2500 euros,
		- 2% pour un montant TTC supérieur ou égal à 2500 euros

	L’exécutant-ordinateur affichera la remise obtenue et le nouveau montant TTC.
	
	
*/

int main(){
	
	// déclaration de la varible
	float nombre;

	// Instructions
	printf("\n\nVeuillez entrer un prix HTVA (sans symbole)\n\n");

	// Input
	scanf("%f", &nombre);
	
	// déclaration de la varible ttc
	float nombre_ttc = nombre*1.21;
	printf("\n\nPrix TTC: %.2f euro\n\n", nombre_ttc);
	
	// Verification 
	if(nombre_ttc < 1500){
		printf("\n\nPas de remise pour ce prix, sorry.\n\n");
	}
	else if(nombre_ttc >= 1500 && nombre_ttc < 2500 ) {
		printf("\n\nVous avez droit à %.2f euro de remise.\n\n", nombre_ttc*0.01);
	}
	else if(nombre >= 2500) {
		printf("\n\nVous avez droit à %.2f euro de remise.\n\n", nombre_ttc*0.02);
	}
	else {
		printf("\n\nIl semble qu'il y ai une erreur...\n\n");
	}
	return 0;
}
