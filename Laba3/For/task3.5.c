#include <math.h>
#include <stdio.h>
double a;

int findFirstNegativeElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*((i - 1) / (2 * pow(i, 2) + 1));
		if (fabs(a) <= eps && a < 0)
		{
			return(i + 1);
		}
	}
}