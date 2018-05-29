#include <math.h>
#include <stdio.h>
double summ2(double eps)
{
	double a = eps + 1.0, s = 0.0;
	int i = 0;
	for (i = 0; fabs(a) <= eps; ++i) {
		a = pow(-1, i)*((i - 1) / (2 * pow(i, 2) + 1));
		s += a;
	}
	return (s);
}