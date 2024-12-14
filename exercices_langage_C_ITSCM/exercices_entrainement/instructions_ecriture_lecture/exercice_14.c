/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_14.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/14 12:13:34                                             */
/*   Updated: 2024/12/14 12:13:34                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int nombre, ancienNombre;
	char touche;
	while("Jaghou"){ //pourquoi pas ?
		system("clear");
		printf("*----------------------*\n");
		printf("| Calculateur de carré |\n");
		printf("*----------------------*\n\n\n");
	
		printf("Veuillez entrer un nombre entier positif,\nensuite appuyez sur <ENTER>\n\n");
		scanf("%d", &nombre); //input
		ancienNombre = nombre;
		nombre *= nombre; //operation du carre
		printf("\nLe carré de %d est %d \n\n", ancienNombre, nombre);
		
		while(getchar() != '\n'){}
		printf("\033[5m");
		printf("Appuyez sur <ENTER> pour continuer ou sur <q> pour quitter : ");
		printf("\033[0m");
		touche = getchar();
		if(touche == 'q' || touche == 'Q'){
			break;
		}

	}
	return 0;

}
