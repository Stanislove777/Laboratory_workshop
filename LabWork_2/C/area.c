#include "lib.h"

int	area(float x, float y)
{
	int i = 0;
	if ((x >= -10 && x <= 0) && (y >= -6 && y <= 0))
		i++;
	else if ((x >= -10 && x <= 0) && (y >= 0 && y <= 4))
		i++;
	return (i);
}

int area2(float x, float y)
{
	int i = 0;

	if ((x > 0 && y < 0) && ((x*x + y*y) <= 1))
		i++;
	else if ((y >= 0 && x <= 0) && (x >= -1 && y <= 1))
		i++;
	return (i);
}

int area3(float x, float y, int *rand_area)
{
	int i = 0;

	// I quarter
	if ((x >= 0 && y >= 0) && (x <= rand_area[0] && y <= rand_area[1]))
		i = 1;
	// II quarter
	else if ((x <= 0 && y >= 0) && (x >= rand_area[2] && y <= rand_area[3]))
		i = 1;
	// III quarter
	else if ((x <= 0 && y <= 0) && (x >= rand_area[4] && y >= rand_area[5]))
		i = 1;
	// IV quarter
	else if ((x >= 0 && y <= 0) && (x <= rand_area[6] && y >= rand_area[7]))
		i = 1;
	return (i);
}

int	*fillArea(int *area)
{
	int i = 0;
	int r;
	int n_r;
	srand(time(NULL));

	while (i < 8)
	{
		r = rand() % 5;
		// I quarter
		if (i == 0)
			area[i] = r;
		else if (i == 1)
			area[i] = r;
		// II quarter
		else if (i == 2)
			area[i] = r * -1;
		else if (i == 3)
			area[i] = r;
		// III quarter
		else if (i == 4)
			area[i] = r * -1;
		else if (i == 5)
			area[i] = r * -1;
		// IV quarter
		else if (i == 6)
			area[i] = r;
		else if (i == 7)
			area[i] = r * -1;
		i++;
	}
	return (area);
}

