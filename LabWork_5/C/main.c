#include "lib.h"

int 	main(int argc, char const *argv[])
{
	int arr[SIZE];
	int i = 0;
	int r = 0;
	int len_range = B - A + 1;

	printf("Массив из случайных элементов: \n");
	while (i < SIZE)
	{
		r = rand() % len_range + A;
		arr[i] = r;
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	maxElem(arr);
	indexElem(arr);
	return 0;
}