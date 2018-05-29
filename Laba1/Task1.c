#include <stdio.h>	

#include <math.h>	

#include <stdlib.h> 
int main(void)
{
	system("chcp 1251");
	system("cls");
	double x = 5;
	double y = 6;
	double f;
	f = (((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + x * x - x));
	printf("Х=%.3lf\r\n", x);
	printf("Y=%.3lf\r\n", y);
	printf("F=%.3lf\r\n", f);
	printf("Введите Х=");

	scanf_s("%lf", &x);

	printf("Введите Y=");

	scanf_s("%lf", &y);
	f = (((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + x * x - x));
	printf("F=%.3lf", f);
	getchar(); getchar();
	return 0;

}



