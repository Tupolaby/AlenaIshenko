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
		printf("������� 2 - 1\n");
		printf("������� 3 - 2\n");
		printf("������� 7 - 3\n");
		printf("������� 8 - 4\n");
		printf("����� - 5\n");
		printf("�������� �������\n");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
			system("cls");
			printf("����� � �����\n");
			incrementStackVariable();
			system("pause");
		
		case 2:
			system("cls");
			printf("����� � ������������ ������\n");
			incrementHeapVariable();
			system("pause");
		
		case 3:
			system("cls");
			printf("������ �� n-��������� � �����\n");
			sortStackArray(arr, n);
			system("pause");
		
		case 4:
			system("cls");
			printf("������ �� n-��������� � ������������ ������\n");
			sortHeapArray(arr, n);
			system("pause");

		case 5:
			return(0);
		default:
			printf("������������ ����\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}