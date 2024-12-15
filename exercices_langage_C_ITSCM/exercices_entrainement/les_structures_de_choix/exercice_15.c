/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_15.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/14 13:02:07                                             */
/*   Updated: 2024/12/14 13:02:07                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Variables
	int a, b, res;
	char op, touche;

	while(1){
		//programme
		system("clear");
		printf("*----------------------------*\n");
		printf("| Affichage produit et somme |\n");
		printf("*----------------------------*\n\n\n");
		printf("Veuillez entrer deux entiers et un caractère,\nappuyez sur <ENTER> entre chaque valeurs et pour valider.\n\n");
		scanf("%d %d %c", &a, &b, &op);
		printf("%d, %d, %c", a, b, op);
		printf("");
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
