
#include <stdio.h>

int		odd(int a);

int main()
{
	int flag;
	int a, total1 = 0;
	int total = 0;
	int count = 0;

	printf("Введите - 1 что бы вводить последовательность по одному числу.\n");
	scanf("%d", &flag);
	if (flag == 1)
	{
		printf("Введите первое число: \n");
		scanf("%d", &a);
		while (flag > 0)
		{
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
	{
		printf("Последовательность не задана");
	}
	
	printf("А12: Кол-во элементов с младшим разрядом равным трём: %d.\n", total);
	printf("B12: Сумма и кол-во элементов с четными числами: %d, %d.\n", total1, count);	

	return 0;
}