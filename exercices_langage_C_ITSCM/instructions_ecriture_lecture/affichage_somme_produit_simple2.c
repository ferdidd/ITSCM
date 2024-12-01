/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   affichage_somme_produit_simple2.c                                        */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/01 18:00:01                                             */
/*   Updated: 2024/12/01 18:00:01                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Variables
	int nombre1, nombre2, somme, produit;
	char touche;
	while(1)
	{
		system("clear");
		printf("************************\n");
		printf("*  Sommes et Produits  *\n");
		printf("************************\n\n");
		printf("Entrez le premier nombre,\nensuite <TAB> pour entrer le deuxième et <ENTER> pour valider\n\ndonnez deux nombres\n");
		scanf("%i%i", &nombre1, &nombre2);
		while(getchar() != '\n'){}
		somme = nombre1+nombre2;
		produit = nombre1*nombre2;
		printf("\nleur somme est %i", somme);
		printf("\nleur produit est %i", produit);
		printf("\n\n\nAppuyez sur <ENTER> pour continuer ou sur <q> pour quitter : ");
		touche = getchar();
		if(touche == 'q' || touche == 'Q')
		{
			break;
		}
	}
}
