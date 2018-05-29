#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void func();

double x, y, result;

int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	x = 5;
	y = 6;
	printf("Х=%.3lf\r\n", x);
	printf("Y=%.3lf\r\n", y);
	func();
	printf("F=%.3lf\r\n", result);
	printf("Введите Х=");
	scanf_s("%lf", &x);
	printf("Введите Y=");
	scanf_s("%lf", &y);
	func();
	printf("F=%.3lf при X,Y введенных с клавиатуры", result);

	getchar(), getchar();

	return(0);
}
