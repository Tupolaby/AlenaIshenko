//Вариант 16 - сортировка Шелла
#include <stdio.h>

void sort(int *arr, int n)
{
	int i, j, step;
	int tmp;
	for (step = n / 2; step > 0; step /= 2)
	{
		for (i = step; i < n; i++)
		{
			tmp = arr[i];
			for (j = i; j >= step; j -= step)
				{
					if (tmp < arr[j - step])
						arr[j] = arr[j - step];
					else
						break;
				}
			arr[j] = tmp;
		}
	}
}

