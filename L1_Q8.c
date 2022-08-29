/* Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044  */

#include <stdio.h>

int main (int argc, char** argv)
{

        int a,b,c;

        printf("Digite três números:\n");
        scanf("%d%d%d",&a,&b,&c);

        if ((a+b) > c && (a+c) > b && (c+b)>a)
        {
                if (a!=b && a!=c && b!=c)
		{
                	printf("O triangulo é  Escaleno\n");
		}
		else
		{
                        if (a==b && b==c)
			{
                        	printf("O triângulo é Equilatero\n");
                        }
			else
			{
                        	printf("O triângulo é isosceles\n");
			}
		}
	}
	else
	{
		printf("Não é um triângulo\n");
        }
        return 0;
}
