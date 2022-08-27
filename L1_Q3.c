/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main (int argc, char** argv)
{
        int a, b, c;

        printf("Digite um número: ");
        scanf("%d", &a);

        printf("Digite um número: ");
        scanf("%d", &b);

        printf("Digite um número: ");
        scanf("%d", &c);

        if(a>b && a>c)
        {
       		printf("O maior número é: %d\n", a);
        }
	else
	{
       		if(b>a && b>c)
       		{
               		printf("O maior número é: %d\n", b);
        	}
		else
		{
              		printf("O maior número é: %d\n", c);
       		}
	}

        return 0;
}
