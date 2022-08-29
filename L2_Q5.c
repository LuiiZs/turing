/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main(int argc, char **argv)

{
        int n;

        printf("Digite  um numero entre zero e dez:");
        scanf("%d", &n);

        while(n<0 && n>10)

        {
                printf("Valor invalido, digite novamente:");
                scanf("%d", &n);
        }

	 return 0;
}
