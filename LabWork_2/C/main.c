#include "lib.h"

int 	main(int argc, char const *argv[])
{
	float x, y;
	float sum;
	float i;
	float j;
	int count_area;
	int count_area2;
	int a;
	int b;

	i = 0;
	j = 0;
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
	}
	printf("\nСреднее арифметическое значение функции: %10.4f\n", sum / i);
	
	printf("A12: Кол-во точек попавших в область прямоугольника: %d\n", count_area);

	printf("B12: Кол-во точек попавших в область: %d\n", count_area2);
	return 0;
}