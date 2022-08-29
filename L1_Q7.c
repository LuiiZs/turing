/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include<stdio.h>

int main()
{
    int n, qtdp=0, qtdi=0, i=0;
    while(i<10)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n%2==0)
        {
            qtdp++;
        }
        else
        {
            qtdi++;
        }
        i++;
    }
    printf("Quantidade de Pares: %d\n", qtdp);
    printf("Quantidade de Impares: %d\n", qtdi);
    return 0;
}
