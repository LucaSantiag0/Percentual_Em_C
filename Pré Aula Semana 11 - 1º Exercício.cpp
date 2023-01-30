#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Primeiro Exercício\n");
	
	int b;
	float a, c, d;
	
	c = 1;
	
	printf("\nDigite um valor inteiro e positivo: ");
	scanf("%f", &a);
	
	for (b=1; b<=a; b++) {
		c = c * b;
	}
	
	d = 1 + 1/c;
	
	printf("O valor de E é de %.2f.", d);
}
