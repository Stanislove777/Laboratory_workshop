#include "lib.h"

void	maxElem(int *arr)
{
	int i = 0;
	int max = 0;
	int count = 0;

	while (i < SIZE)
	{
		if (arr[i] > max)
			max = arr[i];
		else if (arr[i] == max)
			count++;
		i++;
	}
	printf("А: Кол-во максимальных элементов: %d\n", count);
}

void	indexElem(int *arr)
{
	int i = 1;
	int sum1 = 0;

	printf("B: Индекс и элемент, сумма цифр которого кратна своему индексу (кроме нуля): \n");

	while (i < SIZE)
	{
		sum1 = arr[i] / 10 + (arr[i] % 10);
		if (sum1 % i == 0)
			printf("INDEX = %d, ELEMENT = %d, SUM = %d\n", i, arr[i], sum1);
		i++;
	}
}