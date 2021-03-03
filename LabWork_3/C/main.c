#include "lib.h"

int main()
{
	int n;
	double x;
	int i = 0;
	double eps = 1e-7;
	float total, total1, total2, total3, total4 = 0;

	printf("Введите n: \n");
	scanf("%d",&n);
	printf("Введите X: \n");
	scanf("%lf",&x);

	while (n > 0)
	{
		total += Sum(n);
		total1 += Sum1(n);
		total3 += Sum3(x, n);
		n--;
	}

	total2 = Sum2(eps);
	total4 = Sum4(x, eps);

	printf("A: Сумма первых n членов ряда: %10.4f \n", total);
	printf("B: Сумма первых n членов ряда (без pow(), if): %10.4f \n", total1);
	printf("B: Сумма первых n членов ряда (с точность eps): %10.4f \n", total2);
	printf("C: Приблеженная сумма при X = %f: %10.4f\n", x, total3);
	printf("C: Приблеженная сумма при X = %f(с точность eps): %10.4f\n", x, total4);

	return 0;
}