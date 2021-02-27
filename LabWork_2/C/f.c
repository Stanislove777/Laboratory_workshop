#include "lib.h"

double	f(double x)
{
	return (x * exp(x) + 2 * sin(x) - sqrt(fabs(pow(x, 3) - pow(x, 2))));
}