/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   calculateur_de_gel_simple.c                                              */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2024/12/01 14:00:59                                             */
/*   Updated: 2024/12/01 14:00:59                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float temperatureCelsius;
	char touche;
	while(1)
	{
		system("clear");
		printf("**********************\n");
		printf("*  Détecteur de gel  *\n");
		printf("**********************\n\n");
		printf("Veuillez entrer une température négative en unité Celsius : \n* Température > ");
		scanf("%f", &temperatureCelsius);
		while(getchar() != '\n');	
		if(temperatureCelsius <= -23)
		{
			printf("\n\nAttention, à cette température de %.2f°C,  ces liquides seront gelés :\n\n**************\n*  Liquides  *\n**************\n* Eau        *\n* Eau salée  *\n* Fuel       *\n* Essence    *\n* Super      *\n**************\n\n ", temperatureCelsius);
		}
		else if(temperatureCelsius > -23 && temperatureCelsius <= -13)
		{
			printf("\n\nAttention, à cette température de %.2f°C, ces liquides seront gelés :\n\n**************\n*  Liquides  *\n**************\n* Eau        *\n* Eau salée  *\n* Fuel       *\n* Essence    *\n**************\n\n", temperatureCelsius);
		}
		else if(temperatureCelsius > -13 && temperatureCelsius <= -5)
		{
			printf("\n\nAttention, à cette température de %.2f°C, ces liquides seront gelés :\n\n**************\n*  Liquides  *\n**************\n* Eau        *\n* Eau salée  *\n* Fuel       *\n**************\n\n", temperatureCelsius);
		}
		else if(temperatureCelsius > -5 && temperatureCelsius <= -3)
		{
			printf("\n\nAttention, à cette température de %.2f°C, ces liquides seront gelés :\n\n**************\n*  Liquides  *\n**************\n* Eau        *\n* Eau salée  *\n**************\n\n", temperatureCelsius);
		}
		else if(temperatureCelsius > -3 && temperatureCelsius <= 0 )
		{
			printf("\n\nAttention, à cette température de %.2f°C, ce liquide sera gelé :\n\n**************\n*  Liquides  *\n**************\n* Eau        *\n**************\n\n", temperatureCelsius);
		}
		else
		{
			printf("\n\nA cette température de %.2f°C, aucun liquide ne sera gelé.\n", temperatureCelsius);
		}
		
		printf("\nAppuyez sur \"Entrer\" pour continuer ou sur \"q\" pour quitter : ");
		touche = getchar();
		if(touche == 'q' || touche == 'Q')
		{
			break;
		}
	}
	return 0;
}
