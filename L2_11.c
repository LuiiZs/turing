/* carlos rodrigo santos da silva */

#include<stdio.h>

int main()
{
    int n, fat=1;

    printf("Digite o numero: ");
    scanf("%d", &n);

    while(n>0)
    {
        fat = fat * n;
        n--;
    }
    printf("Fatorial = %d\n", fat);
    return 0;
}
