/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main (int argc, char** argv)
{
	int a,b;

	printf("Digite um número: ");
	scanf("%d", &a);

        printf("Digite um número: ");
        scanf("%d", &b);

	if(a>b)
	{
		printf("O maior número é:%d\n",a);
	}
	else
	{
		printf("O maior número é:%d\n",b);
	}

	return 0;
}
