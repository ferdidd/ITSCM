/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_31.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 14:11:28                                             */
/*   Updated: 2024/12/15 14:11:28                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Variables
	int n,i;
	int j = 0;
	char touche;
	while(1){
		//programme
		system("clear");
		printf("*-----------------------------------------------*\n");
		printf("| Calcul la somme des entiers jusqu'à ce nombre |\n");
		printf("*-----------------------------------------------*\n\n\n");
		printf("Veillez entrer un nombre\n");
		printf("\nappuyez sur <ENTER> après avoir entré votre nombre pour valider.\n\n");
		scanf("%d", &n);
		for (i = 0 ; i < n ; i++)
		{
			j = j+i;
		}
		printf("La somme est %d", j);
		while(getchar() != '\n'){}

		printf("\n\n\nAppuyez sur <ENTER> pour continuer ou sur <q> pour quitter : \n");
		touche = getchar();
		if(touche == 'q' || touche == 'Q'){
			break;
		}
	}
	return 0;

}
