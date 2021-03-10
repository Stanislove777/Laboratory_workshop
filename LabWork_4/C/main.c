
#include <stdio.h>

int		odd(int a);
void	checkPrimeNum(int *num, int size);

int main()
{
	int flag;
	int a, total1 = 0;
	int total = 0;
	int count = 0;
	int num[100];
	int i = 0;

	printf("Введите - 1 что бы вводить последовательность по одному числу.\n");
	scanf("%d", &flag);
	if (flag == 1)
	{
		printf("Введите первое число: \n");
		scanf("%d", &a);
		while (flag > 0)
		{
			num[i] = a;
			i++;
			if (odd(a) == 1)
			{
				total1 += a;
				count++;
			}
			a = a % 10;
			if (a == 3)
				total++;
			printf("Продолжить? Если да - ввести число или 0 что бы закончить\n");
			scanf("%d", &flag);
			a = flag;
		}
	}
	else
		printf("Последовательность не задана.\n");

	printf("Последовательность задана: \n");
	
	
	printf("А: Кол-во элементов с младшим разрядом равным трём: %d.\n", total);
	printf("B: Сумма и кол-во элементов с четными числами: %d, %d.\n", total1, count);
	printf("C: Кол-во идузих подряд простых чисел и составных: ");
	checkPrimeNum(num, i);

	return 0;
}