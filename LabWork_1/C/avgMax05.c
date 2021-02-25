#include "lib.h"

void	avgMax05(void)
{
	int count = 0;
	float sum2 = 0;
	float x, y;
	int a;
	float b;

	printf("\n");

	for (x = A; x <= B; x += H)
	{
		y = f(x);
		a = y; //Целая часть
		b = y - a; // Дробная часть
		if (((a % 2) != 0) && (b > 0.5))
		{
			sum2 += y;
			count++;
		}
	}
	printf("Среднее арифметическое: %10.4f\n", sum2 / count);
}