/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main()
{

        int i=0,n,maior=-9999;

        while (i<5)
        {

                printf("Digite um número: ");
                scanf("%d", &n);

                if(n>maior)
                {

                        maior=n;
                }

                i++;
        }

        printf("O maior número é:%d\n", maior);
        return 0;
}
