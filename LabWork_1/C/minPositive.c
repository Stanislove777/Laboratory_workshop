#include "lib.h"

void	minPositive(void)
{
	float x, y;
	float min = 999;
	int count = 0;

	for (x = A; x <= B; x += H)
	{
		y = f(x);
		if (y > 0 && y <= min)
		{
			min = y;
			count++;
		}
	}
	printf("min = %10.4f, count = %d\n", min, count);
}