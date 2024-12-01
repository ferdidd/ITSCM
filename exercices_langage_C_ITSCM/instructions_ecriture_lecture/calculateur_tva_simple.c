/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   calculateur_tva_simple.c                                                 */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/01 19:01:26                                             */
/*   Updated: 2024/12/01 19:01:26                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Variables
	float prixUnitaireHT, nbArticles, TVA, totalHT, totalTTC;
	char touche;
	while(1)
	{
		system("clear");
		//Programme
		printf("*********************\n");
		printf("*  Calculateur TVA  *\n");
		printf("*********************\n\n");
		printf("Veuillez entrer un prix unitaire\nEnsuite le nombre d'articles\nEnsuite un taux de TVA\nAppuyez sur <ENTER> entre chaque entrées et pour valider.\n\n\n");
		printf("prix unitaire HT :\n");
		printf("\033[1m");
		scanf("%f", &prixUnitaireHT);
		printf("\033[0m");
		printf("nombre articles :\n");
		printf("\033[1m");
		scanf("%f", &nbArticles);
		printf("\033[0m");
		printf("taux de TVA :\n");
		printf("\033[1m");
		scanf("%f", &TVA);
		printf("\033[0m");
		totalHT = prixUnitaireHT*nbArticles;
		totalTTC = totalHT+((totalHT*TVA)/100);
		printf("prix total HT : %.0f,\nprix total TTC : %.2f", totalHT, totalTTC);
		while(getchar() != '\n'){}
		printf("\n\n\nAppuyez sur <ENTER> pour continuer ou sur <q> pour quitter : ");
		touche = getchar();
		if(touche == 'q' || touche == 'Q')
		{
			break;
		}
	}
	return 0;
}
