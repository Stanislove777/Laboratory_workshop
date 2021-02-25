#include "lib.h"

void	avgM(void)
{
	float sum1 = 0;
	float x, y;
	float count, m;


	count = 0;
	
	printf("Введите М: \n");
	scanf("%e", &m);
	for (x = A; x <= B; x += H)
	{
		y = f(x);
		if (y < m)
		{
			sum1 += y;
			count++;
		}
	}
	printf("Среднее арифметическое: %10.4f\n", sum1 / count);
	printf("\n");
}