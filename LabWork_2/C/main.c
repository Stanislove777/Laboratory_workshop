#include "lib.h"

int 	main(int argc, char const *argv[])
{
	float x, y;
	float sum;
	float i, j;
	int count_area = 0;
	int count_area2 = 0;
	int count_area3 = 0;
	int a, b, c;
	int randomArea[8];

	i = 0;
	j = 0;
	fillArea(&randomArea[0]);
	printf("Значение x = от A до B с шагом H\n");
	for (x = A; x <= B; x += H)
	{
		y = f(x);
		sum += y;
		i++;
		printf("x = %10.4f    F(x) = %10.4f\n", x, y);
		a = area(x, y);
		count_area += a;
		b = area2(x, y);
		count_area2 += b;
		c = area3(x, y, randomArea);
		count_area3 += c;
	}
	printf("\nСреднее арифметическое значение функции: %10.4f\n", sum / i);
	
	printf("A: Кол-во точек попавших в область прямоугольника: %d\n", count_area);

	printf("B: Кол-во точек попавших в область: %d\n", count_area2);

	printf("C: Сгенерировать 4 точки в разных четвертях и найти кол-во точек в этой области\n");
	int quart = 1;
	printf("Quarter = %d\n", quart);
	quart++;
	for (int count = 0; count < 8; count++)
	{
		printf("%d\n", randomArea[count]);
		if ((count % 2 != 0) && count != 7)
		{
			printf("Quarter = %d\n", quart);
			quart++;
		}
	}
	printf("Кол-во точек попавших в область: %d\n", count_area3);

	return 0;
}