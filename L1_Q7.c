/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main()
{
	float ap1, ap2, m, pf;
	{
		printf("Digite a nota da sua AP1:\n");
		scanf("%f", &ap1);

		printf("Digite a nota da sua AP2:\n");
		scanf("%f", &ap2);

		m=(ap1+ap2)/2;
	}
	if(m>=8)
	{
		printf("Voçê está aprovado com nota = %.2f\n", m);
	}
	else if (m>=4 && m<8)
	{
		printf("Digite a nota da sua PF:\n");
		scanf("%f", &pf);

		m=(m+pf)/2;

		if(m>=6)
		{
			printf("Voçê está aprovado com nota = %.2f\n", m);
		}
		else
		{
			printf("Voçê está reprovado");
		}
	}
	else
	{
		printf("Voçê está reprovado direto\n");
	}
	return 0;
}
