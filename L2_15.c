/* carlos rodrigo santos da silva - 2015090002 */

#include<stdio.h>

int main()
{
	int n;
	float soma=0, i=1, m=1;
	{
		printf("Entre com o valor de n: \n");
		scanf("%d", &n);

		while(i<=n)
		{
			soma = soma + (i/m);
			printf("%.0f/%.0f\n", i, m);
			i = i + 1;
			m = m + 2;
		}
	}
	return 0;
}
