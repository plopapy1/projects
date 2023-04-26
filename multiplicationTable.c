#include <stdio.h>
/**
 * main-multiplication tabel
 */
void main(void)
{
	int i;
	int j;
	int k;

	printf("input the number you want to table\n");
	scanf("%d", &i);

	for (j = 1; j <= 12; j++)
	{
		k = i * j;
		printf("%d * %d = %d\n", i, j, k);
	}
}
