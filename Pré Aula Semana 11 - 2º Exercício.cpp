#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Segundo Exercício\n");
	
	int a, b, c, d, e;
	
	printf("\nDigite quantos valores você quer digitar: ");
	scanf("%i", &a);
	
	for (b=1; b<=a; b++) {
		printf("\nDigite o %iº valor: ", b);
		scanf("%i", &c);
		
		e = 1;
		
		for (d=1; d<=c; d++) {e = e * d;}
		
		printf("Valor lido: %i\n", c);
		printf("Fatorial: %i\n", e);
	}
	
	printf("\nFim.");
}
