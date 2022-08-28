/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main (int argc, char** argv)
{
        float a, b, c;

        printf("O preço do primeiro produto: ");
        scanf("%f", &a);

        printf("O preço do segundo produto: ");
        scanf("%f", &b);

        printf("O preço do terceiro produto: ");
        scanf("%f", &c);

	if(a<b & a<c )
        {
                printf("Você deve comprar o poduto de valor:%.2f\n", a);
        }
        else
        {
                if(b<a & b<c)
                {
                	printf("Você deve comprar o poduto de valor:%.2f\n", b);
                }
		else
		{
			printf("Você deve comprar o poduto de valor:%.2f\n", c);
		}
	}

	return 0;
}
