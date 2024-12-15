/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_40.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 14:12:43                                             */
/*   Updated: 2024/12/15 14:12:43                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Variables
	while(1){
		//programme
		system("clear");
		printf("*----------------------------*\n");
		printf("| |\n");
		printf("*----------------------------*\n\n\n");
		printf(",\nappuyez sur <ENTER> entre chaque valeurs et pour valider.\n\n");
		scanf("", );
		printf("",);
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
