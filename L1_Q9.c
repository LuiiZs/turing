/* Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044  */

#include <stdio.h>
#include <math.h>

int main (int argc, char** argv)
{

        int a, b, c, delta;
	float x1, x2;

        printf("Digite os tres valores da equação a, b e c:\n");
        scanf("%d%d%d",&a,&b,&c);

	delta = b*b-4*a*c;

        if (a > 0)
        {
		if(delta > 0)
		{
			x1 = (-b + sqrt(delta))/2*a;
			x2 = (-b - sqrt(delta))/2*a;
			printf("Os valores de x1 é %.2f e x2 é %.2f \n", x1, x2);
		}
		if(delta == 0)
		{
			x1 = (-b + sqrt(delta))/2*a;
                        x2 = (-b - sqrt(delta))/2*a;
                        printf("Os valores de x1 e x2 é %.2f \n", x1);
		}
		else
		{
			if(delta <0)
			{
				printf("A equação não possui raizes reais\n");
			}
		}
	}
	else
	{
		printf("Não é uma equação de segundo grau\n");
	}
	return 0;
}
