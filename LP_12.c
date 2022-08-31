/* carlos rodrigo santos da silva */

#include<stdio.h>

int main()
{
    int n, inv, div=10, aux=0;

    printf("Digite o numero: ");
    scanf("%d", &n);
    while(n>0)
    {
        aux= aux + (n % 10);
        aux = aux * 10;
        n = n - (n % 10);
        n = n/10;
    }
    aux=aux/10;
    printf("Valor = %d\n", aux);
    return 0;
}
