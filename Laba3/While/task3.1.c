#include <math.h>
#include <stdio.h>
double summ(int n)
{
	double a=0,s = 0.0;
	int i = 0;

	while (i < n)
	{
		a = pow(-1, i)*((i - 1) / (2 * pow(i, 2) + 1));
		s =s+ a;
		++i;
	}
	return (s);
}