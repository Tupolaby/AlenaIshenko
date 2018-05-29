#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int g, x;
	const int n = 5;
	int arr[5];

	while (g = -1)
	{
		printf("Задание 2 - 1\n");
		printf("Задание 3 - 2\n");
		printf("Задание 7 - 3\n");
		printf("Задание 8 - 4\n");
		printf("Выход - 5\n");
		printf("Выберите задание\n");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
			system("cls");
			printf("Число в стеке\n");
			incrementStackVariable();
			system("pause");
		
		case 2:
			system("cls");
			printf("Число в динамической памяти\n");
			incrementHeapVariable();
			system("pause");
		
		case 3:
			system("cls");
			printf("Массив из n-элементов в стеке\n");
			sortStackArray(arr, n);
			system("pause");
		
		case 4:
			system("cls");
			printf("Массив из n-элементов в динамической памяти\n");
			sortHeapArray(arr, n);
			system("pause");

		case 5:
			return(0);
		default:
			printf("Неправильный ввод\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}