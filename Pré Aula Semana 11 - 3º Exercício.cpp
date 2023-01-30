#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Terceiro Exercício\n");
	
	int a, d;
	char b, c;
	float e, f, g, h, i;
	
	a = 1;
	
	do {
		printf("\nDigite sua categoria (G ou O): ");
		scanf("%c", &b);
	} while (b!='G' && b!='O');
	
	do {
		printf("\nDigite o turno (M ou V ou N): ");
		scanf("%c", &c);
	} while (c!='M' && c!='V' && c!='N');
	
	if (b=='G') {
		if (c=='N') {e = 450 * 0.18;}
		else {e = 450 * 0.15;}
	}
	else {
		if (c=='N') {e = 450 * 0.13;}
		else {e = 450 * 0.1;}
	}
	
	printf("\nQuantas horas você trabalhou? ");
	scanf("%f", &f);
	
	g = f * e;
	
	if (g<=300) {h = g * 0.2;}
	else {
		if (g<=600) {h = g * 0.15;}
		else {h = g * 0.5;}
	}
	
	i = g + h;
	
	printf("\nCategoria: %c\nTurno: %c\nHoras trabalhadas: %.1f\nValor da hora: R$%.2f\nSalário inicial: R$%.2f\nAuxílio alimentação: R$%.2f\nSalário final: R$%.2f", b, c, f, e, g, h, i);
}
