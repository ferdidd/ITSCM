/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   affichage_somme_simple.c                                                 */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/01 15:46:56                                             */
/*   Updated: 2024/12/01 15:46:56                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Variables
	int a, b, somme, produit;
	char touche;
	while(1)
	{
		//Programme
		system("clear");
		printf("*****************************\n");
		printf("*  Simple Somme et Produit  *\n");
		printf("*****************************\n\n");
		printf("Veuillez entrer le nombre a et le nombre b qui seront additionnés et multipliés : \n* Nombre a > ");
		scanf("%i", &a);
		printf("* Nombre b > ");
		scanf("%i", &b);
		while(getchar() != '\n'){}
		produit = a*b;
		somme = a+b;
		printf("\n\na = %i, b = %i\na*b = %i\na+b = %i\n ", a, b, produit, somme);
		printf("\n\n\nAppuyez sur \"Enter\" pour continuer ou sur \"q\" pour quitter : ");
		touche = getchar();
		if(touche == 'q' || touche == 'Q')
		{
			break;
		}
	}
	return 0;
}
