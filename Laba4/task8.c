#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int k = 0;
void sortHeapArray(int *arr, int n)
{
	n = 0;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	*arr = (int )malloc(sizeof(int)*n);
	writeArray(arr, n);
	sort(arr, n);
	printf("Отсортированный массив \n");
	readArray(arr, n);
	
		free(arr);
		arr = NULL;

	
}