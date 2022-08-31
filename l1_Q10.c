/* carlos rodrigo santos da silva - 2015090002 */
#include<stdio.h>
#include<math.h>

int main()
{
    int valor, resto, n1, n5, n10, n50, n100;

    printf("Digite o valor(10-600): ");
    scanf("%d", &valor);

    n100 = valor/100;
    resto = valor%100;
    n50 = resto/50;
    resto = resto%50;
    n10 = resto/10;
    resto = resto%10;
    n5 = resto/5;
    resto = resto%5;
    n1 = resto;
    printf("Notas de  100: %d\n", n100);
    printf("Notas de  50: %d\n", n50);
    printf("Notas de  10: %d\n", n10);
    printf("Notas de  5: %d\n", n5);
    printf("Notas de  1: %d\n", n1);
    return 0;
}
