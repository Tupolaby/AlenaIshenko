#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int main(void)
{
	system("chcp 1251");
	system("cls"); 
	x = 5;
	y = 6;
	printf("�=%.3lf\r\n", x);
	printf("Y=%.3lf\r\n", y);
	func();
	printf("F=%.3lf\r\n", result);
	printf("������� �=");
	scanf_s("%lf", &x);
	printf("������� Y=");
	scanf_s("%lf", &y);
	func();
	printf("F=%.3lf ��� X,Y ��������� � ����������", result);

	getchar(), getchar();

	return(0);
}
