/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_28.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 14:11:00                                             */
/*   Updated: 2025/01/18 15:51:00                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Variables
	int a,b,i;
	char touche;
	while(1){
		//programme
		system("clear");
		printf("*------------------------------*\n");
		printf("| Affiche le double de l'écart |\n");
		printf("*------------------------------*\n\n\n");
		printf(",\nVeuillez entrer une valeur de départ et une valeur finale.\n");
		printf(",\nappuyez sur <ENTER> entre chaque valeurs et pour valider.\n\n");
		scanf("%d %d", &a, &b);
		for (i=a ; i < b ; i++) 
		{
			printf("\n%d ", i*2);
		}
		printf("");
		while(getchar() != '\n'){}

		printf("\n\n\nAppuyez sur <ENTER> pour continuer ou sur <q> pour quitter : \n");
		touche = getchar();
		if(touche == 'q' || touche == 'Q'){
			break;
		}
	}
	return 0;

}
