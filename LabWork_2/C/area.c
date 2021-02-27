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