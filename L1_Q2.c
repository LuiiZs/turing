/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main (int argc, char** argv)
{
        int a;

        printf("Digite um número: ");
        scanf("%d", &a);

	if(a==0)
	{
	printf("O número é nulo\n");
	}
	else
	{
	        if(a>0)
		{
                	printf("O número é positivo\n");
        	}
  		else
       		{
               		printf("O número é negativo\n");
       		}
	}

        return 0;
}
