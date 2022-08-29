/*
Jorge Luiz Macedo dos Santos Junior - 2015090015
Carlos Rodrigo Santos da Silva - 2015090002
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main(int argc, char **argv)
{

        int n1, n2;

        printf("Digite o primeiro número:\n");
        scanf("%d", &n1);
        printf("Digite o segundo número:\n");
        scanf("%d", &n2);
        if(n1<n2)
        {
                n1= n1+1;
                while(n1<n2)
                {
                        printf("%d\n", n1);
                        n1= n1+1;
                }
        }
        else
        {
                n2=n2+1;
                while(n2<n1)
                {
                        printf("%d\n", n2);
                        n2 = n2 +1;
                }
        }
        return 0;
}
