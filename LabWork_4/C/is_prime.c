#include <stdio.h>

int		isPrime(int a)
{
	int i = 2;

	if (a == 2)
		return (1);
	else if (a == 1 || a == 0)
		return (0);

	while (i != a)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	checkPrimeNum(int *num, int size)
{
	int j = 0;
	int countPrime[] = {0, 0};
	int countTemp[] = {0, 0};

	while (j < size)
	{
		if (isPrime(num[j]) == 1)
		{
			countTemp[1] = 0;
			countTemp[0]++;
			if (countTemp[0] > countPrime[0])
				countPrime[0] = countTemp[0];
		}
		else
		{
			countTemp[0] = 0;
			countTemp[1]++;
			if (countTemp[1] > countPrime[1])
				countPrime[1] = countTemp[1];
		}
		j++;
	}
	printf("prime = %d, not prime = %d\n", countPrime[0], countPrime[1]);
}

