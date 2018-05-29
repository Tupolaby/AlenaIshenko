#include <stdio.h>
#include "Header.h"

void sortStackArray(int *arr, int n)
{
	writeArray(arr, n);
	sort(arr, n);
	readArray(arr, n);
}