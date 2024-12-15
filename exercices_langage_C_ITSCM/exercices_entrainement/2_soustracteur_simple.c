/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   soustracteur_simple.c                                                    */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/01 13:40:58                                             */
/*   Updated: 2024/12/01 13:40:58                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nombre1, nombre2, resultat;
	char touche;
	while(1)
	{
		system("clear");
		printf("*****************************\n");
		printf("*  Soustracteur de nombres  *\n");
		printf("*****************************\n\n");

		printf("Veuillez entrer le nombre 1 : \n*  Nombre 1 > ");
		scanf("%f", &nombre1);
		printf("\nVeuillez entrez le nombre 2 : \n* Nombre 2 > ");
		scanf("%f", &nombre2);
		while(getchar() != '\n'){}
		if(nombre1 >= nombre2)
		{
			resultat = nombre1 - nombre2;
		}
		else
		{
			resultat = nombre2 - nombre1;
		}

		printf("\n\n\nLe résultat est : \n* > %.2f\n", resultat);
		printf("\n\nAppuyez sur \"Enter\" pour continuer ou sur \"q\" pour quitter : ");
		touche = getchar();
		if(touche == 'q' || touche == 'Q')
		{
			break;
		}
	}
	return 0;
}

