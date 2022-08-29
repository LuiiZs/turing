/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main(int argc, char** argv)

{
        int base, exp, i=0, valor=1;

        printf("Digite a base e o expoente:\n");
        scanf("%d%d", &base, &exp);

        while(i<exp)

        {
                valor = valor*base;
                i = i+1;
        }

        printf("Resultado:%d\n", valor);
        return 0;
}
