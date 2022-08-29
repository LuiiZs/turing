/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include<stdio.h>

int main()
{
    int n, ant1=1, ant2=1, i=2, atual, aux;
    printf("Digite o valor: ");
    scanf("%d", &n);
    if(n==1 || n==2)
    {
        printf("Valor: 1\n");
    }
    else{
        while(i<n)
        {
            atual = ant1 + ant2;

            ant2 = ant1;
            ant1 = atual;
            i++;
        }
    }
    printf("Valor: %d\n", atual);
    return 0;
}
