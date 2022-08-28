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

	if(a>b & a>c )
        {
		if(b>c)
		{
			printf("%d %d %d\n", a,b,c);
		}
		else
		{
			printf("%d %d %d\n", a,c,b);
		}
	}
	else
	{
		if(b>a & b>c)
		{
               		if(a>c)
               		{
                       		printf("%d %d %d\n", b,a,c);
               		}
         	      	else
			{
                        	printf("%d %d %d\n", b,c,a);
               		}
       		}
       		else
       		{
			if(a>b)
             		{
                       		printf("%d %d %d\n", c,a,b);
             		}
             		else
             		{
                        printf("%d %d %d\n", c,b,a);
              		}
		}
	}
	return 0;
}
