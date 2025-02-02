/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   exercice_27.c                                                            */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/15 14:10:32                                             */
/*   Updated: 2025/01/18 15:27:30                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Variables
	int n = 0;
	char touche;
	while(1){
		//programme
		system("clear");
		printf("*--------------------------------*\n");
		printf("| Nombre positif inférieur à 100 |\n");
		printf("*--------------------------------*\n\n\n");
		do {
			printf("\nVeillez entrer un nombre inférieur à 100.\n\n");
			printf("\nappuyez sur <ENTER> une fois la valeur entrée.\n\n");
			scanf("%d", &n);
			printf("Vous avez entré la valeur %d \n\n", n);

		}while(n >= 100 && n > 0);
		printf("félicitation, %d est plus petit que 100", n);
		while(getchar() != '\n'){}
		printf("\n\n\nAppuyez sur <ENTER> pour continuer ou sur <q> pour quitter : \n");
		touche = getchar();
		if(touche == 'q' || touche == 'Q'){
			break;
		}
	}
	return 0;

}
