#include <stdio.h>
int main()
{
	int i;
	int num;
	int quadrato;
	printf("Inserisci il numero: ");
	scanf("%d", &num);
	printf("Il quadrato di ogni numero pari da 1 a %d \n", num);
	for (i=1;i<num;i++)
	{
		if(i%2==0)
		{
			quadrato=i*i;
		printf("%d^2 = %d \n", i, quadrato);
		}
	}
	return 0;
}
