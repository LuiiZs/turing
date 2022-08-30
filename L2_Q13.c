/* carlos rodrigo santos da silva - 2015090002 */

#include <stdio.h>

int main(int argc, char**  argv)
{
	int n;
	float soma=0, i=1, m=1;
	{
		printf("Entre om o valor de n: \n");
		scanf("%d", &n);

		while(i<=n)
		{
			soma = soma + (i/m);
			printf(" %.0f/%.0f\n", i, m);
			i = i + 1;
			m = m + 2;
		}
	}
	printf("Soma = %.3f\n", soma);
	return 0;
}
