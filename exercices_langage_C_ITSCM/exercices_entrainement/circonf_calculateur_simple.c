/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   circonf_calculateur_simple.c                                             */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/01 12:31:33                                             */
/*   Updated: 2024/12/01 12:31:33                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float reelPi = 3.14;
	float valeurRayon, circonference;
	char touche;
	while(1)
	{	
    		system("clear");
    
    		printf("********************************************\n");
    		printf("*  Calculateur de circonférence de cercle  *\n");
    		printf("********************************************\n\n");

    		printf("Veuillez entrer une valeur positive :\n> ");
    		scanf("%f", &valeurRayon);
		while(getchar() != '\n'){}
    		circonference = 2*reelPi*valeurRayon;

    		printf("\nLa circonférence du cercle est %.2f\n\n", circonference);
		
		printf("\n\nAppuyez sur \"Enter\" pour continuer ou sur \"q\" pour quitter : ");
		touche = getchar();
		if(touche == 'q' || touche == 'Q')
		{
			break;
		}
	}
    return 0;
}
