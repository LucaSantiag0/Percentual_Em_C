#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Segundo Exerc�cio\n");
	
	int a, b, c, d, e;
	
	printf("\nDigite quantos valores voc� quer digitar: ");
	scanf("%i", &a);
	
	for (b=1; b<=a; b++) {
		printf("\nDigite o %i� valor: ", b);
		scanf("%i", &c);
		
		e = 1;
		
		for (d=1; d<=c; d++) {e = e * d;}
		
		printf("Valor lido: %i\n", c);
		printf("Fatorial: %i\n", e);
	}
	
	printf("\nFim.");
}
