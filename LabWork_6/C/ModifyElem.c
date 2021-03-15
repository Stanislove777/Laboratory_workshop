#include "lib.h"

void 	changeElem(int *arr)
{
	int i = 0;
	int max = 0;

	while (i < SIZE)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	i = 0;
	printf("A: Заменить кратные 7 числа на максимальное - MAX = %d\n", max);
	while (i < SIZE)
	{
		if (arr[i] % 7 == 0)
			arr[i] = max;
		printf("%d ", arr[i]);
		i++;
	}
}

int isNotPrime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int revNum(int n)
{
	int a = n % 10;
	int b = n / 10;

	return(a * 10 + b);
}

void minRevElem(int *arr)
{
	int i = 0;
	int min = 100;

	while (i < SIZE)
	{
		if (arr[i] / 10 == 3)
			if (min > arr[i])
				min = arr[i];
		i++;
	}
	printf("\nB: Минимальный элемент массива = %d\n", min);

	i = 0;
	int j = 0;
	while (i < SIZE)
	{
		if (isNotPrime(arr[i]) == 1)
		{
			arr[i] = revNum(arr[i]);
			while (j < SIZE)
			{
				printf("%d, ", arr[j]);
				j++;
			}
		}
		printf("\n");
		j = 0;
		i++;
	}
}

int diffElem(int n)
{
	if (n > 9)
	{
		if (n % 10 != n / 10)
			return (1);
		else
			return (0);
	}
	else
		return (1);
}

void oddElem(int *arr, int newSize)
{
	int i = 0;
	int j = 0;
	int temp;

	while (i < newSize)
	{
		if (arr[i] % 2 == 0)
		{
			j = i + 1;
			while (j < newSize)
			{
				if (arr[j] % 2 == 0)
				{
					if (arr[i] > arr[j])
					{
						temp = arr[j];
						arr[j] = arr[i];
						arr[i] = temp;
					}
				}
				j++;
			}
		}
		i++;
	}

	i = 0;
	while (i < newSize)
	{
		printf("%d ", arr[i]);
		i++;
	}

}

void oddDiffElem(int *arr)
{
	int i = 0;
	int j = 0;
	int newSize = SIZE;
	int newArr[newSize];

	while (i < SIZE)
	{
		if (diffElem(arr[i]) == 0)
		{
			newArr[j] = arr[i];
			newSize--;
			j++;
		}
		i++;
	}
	newSize = j;
	i = 0;
	printf("С: Новый массив с удаленными элементами: \n");
	while (i < newSize)
	{
		printf("%d ", newArr[i]);
		i++;
	}
	printf("\nC: Массив с упорядоченными чётными числами: \n");
	oddElem(newArr, newSize);
}