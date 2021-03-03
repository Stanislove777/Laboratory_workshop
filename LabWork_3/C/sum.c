#include "lib.h"

double Sum(int n)
{
	return ((n + 2) / ((pow(n, 3)) + 3));
}

double Sum1(int n)
{
	double a = 1;
	int i = 1;
	double b;

	while (i <= n)
	{
		a = a * -1;
		i++;
	}
	b = (n * n) + n + 3;
	return (a * (2 / b));
}

double Sum2(double eps)
{
	double a = 1;
	double total = 0;
	while (fabs(total) < eps)
	{
		total += Sum1(a);
		a++;
	}
	return total;
}

int factorial(int n)
{
	int i = 1;
	int result = 1;

	while (i <= n)
	{
		result = result * n;
		n--;
	}
	return (result);
}

int negative(int n)
{
	int i = 0;
	int result = 1;

	while (i < n)
	{
		result = result * -1;
		i++;
	}
	return (result);
}

int power(int n)
{
	int i = 1;
	int result = 1;

	while (i <= n)
	{
		result = 3 * result;
		i++;
	}
	return (result);
}

double Sum3(double x, int n)
{
	float total = 0;
	int i = 0;
	int fact = factorial(n);
	int neg = negative(n);
	int pow = power(n);

	total = (neg * ((float)(n + 1) / (pow * fact))) * x;

	return total;
}

double Sum4(double x, double eps)
{
	double a = 1;
	double total = 0;
	while (fabs(total) < eps)
	{
		total += Sum3(x, a);
		printf("%f\n", a);
		a++;
	}
	return total;
}
