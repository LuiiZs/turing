/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/
#include <stdio.h>

int main()
{
        float i=0,soma=0,n;
        float media;

        while(i<5)
        {
                printf("Digite um número: ");
                scanf("%f", &n);

                soma=soma+n;
                i++;
        }

        media=soma/5;
        printf("O valor da soma é:%.2f\n", soma);
        printf("O valor da media é:%.2f\n", media);
        return 0;
}

