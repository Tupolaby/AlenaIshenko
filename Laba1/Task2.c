#include <stdio.h>	

#include <math.h>	

#include <stdlib.h> 
double func(double x, double y)
{

double f;

f = (((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + x * x - x));

return(f);
}
int main(void)
{
	system("chcp 1251");
	system("cls");
	double x = 5;
	double y = 6;
	printf("Х=%.3lf\r\n", x);
	printf("Y=%.3lf\r\n", y);
	func(x, y);
	printf("F=%.3lf\r\n", func(x, y));
	printf("Введите Х=");

	scanf_s("%lf", &x);

	printf("Введите Y=");

	scanf_s("%lf", &y);
	func(x, y);
	printf("F=%.3lf при X,Y введенных с клавиатуры", func(x, y));
	getchar(); getchar();
	return 0;

}
