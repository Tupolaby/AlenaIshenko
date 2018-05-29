#include <stdio.h>

#include <math.h>	

#include <stdlib.h> 

double func(double x);

_Bool isInArea(double x, double y);

int main(void)
{

	system("chcp 1251");

	system("cls");

	double  x, y;

	int n;

	printf("Выберите задание 1 или 2:\n");

	scanf_s("%d", &n);

	switch (n)
	{

	case 1:
	{

		printf("Выполнение первого задания:\n");

		printf("Введите Х=");

		scanf_s("%lf", &x);

		printf("Введите Y=");

		scanf_s("%lf", &y);

		isInArea(x, y);

		printf("%d", isInArea(x, y));
	}

	break;

	case 2:

	{

		printf("Выполнение второго задания:\n");

		printf("Введите Х=");

		scanf_s("%lf", &x);

		func(x);

		printf("%.3lf", func(x));

	}

	break;

	default:

		printf("Неправильный ввод ");

		break;

	}

	getchar();

	getchar();

	return(0);

}

_Bool isInArea(double x, double y)

{
	if ((x >= -1) && (x <= 1) && (-1 <= y) && (y <= 1))
		if ((x < 0) && (y > 0))
			return(0);
		else
			return(1);
	else
		return(0);
}

double func(double x)
{
	double f;

	x >3.6 ? (f = (45 * pow(x,2) + 5)) : (f =5*x/(10*pow(x,2)+1) );

	return(f);
}

