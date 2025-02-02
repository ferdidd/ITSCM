#include <stdio.h>
#include <stdlib.h>


int main()
{
	char guy[3];
	int zero[10];
	int i = 0;
	int j = 0;

	guy[0] = 'G';
	guy[1] = 'u';
	guy[2] = 'y';

	printf("%s\n",guy );

	for (i=0;i<=9;i++) {
		zero[i] = 0;
	}
	
	for (j=0;j<=9;j++){
		printf("%d\n",zero[j]);
		

	}

	
	return 0;
}