/* carlos rodrigo santos da silva */

#include<stdio.h>

int main()
{
    int n, cont=0, i=1;

    printf("Digite o numero: ");
    scanf("%d", &n);

    while(i<=n)
    {
        if(n%i==0)
        {
            cont++;
        }
        i++;
    }
    if(cont==2)
    {
        printf("E primo.\n");
    }
    else
    {
        printf("Nao e primo.\n");
    }
    return 0;
}
