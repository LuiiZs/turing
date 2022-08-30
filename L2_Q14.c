/* carlos rodrigo santos da silva */

#include <stdio.h>

int main (int argc, char** argv)
{
	float h, i=1, n, soma=0, cima=1;
	{
		printf("Quantos termos voçê quer que some:\n");
		scanf("%f", &n);
	}
	while (n>=i)
	{
		h=cima/i;
		soma=soma+h;
		i++;
	}
	printf("O valor de h é:%.2f\n", soma);
	return 0;
}
