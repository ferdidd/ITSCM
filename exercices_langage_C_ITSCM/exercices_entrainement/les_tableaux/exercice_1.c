#include <stdio.h>
#include <stdlib.h>


int main()
{
	//Variables
	int tab[10],i;
	
	printf("\n\n\n\nVeillez entrer 10 valeurs \n\n");
	
	for(i=0;i<=9;i++){
		printf("Entrez la valeur %d\n", i+1);
		scanf("%d" ,&tab[i]);
		
	}

	//Variables
	int max = tab[0];
	i=0;

	for(i=0;i<10;i++){

		if (max < tab[i])
		{
			max = tab[i];
		}
	}

	printf("\n\nLa Valeur MAX est : %d %d \n\n\n\n\n",max );
	return 0;
}
