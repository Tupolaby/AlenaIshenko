#include <math.h>
#include <stdio.h>
double summ(int n)
{
	double a = 0, s = 0.0;
	int i = 0;

	for(i=0;i<=n-1;i++)
	{
		a = pow(-1, i)*((i - 1) / (2 * pow(i, 2) + 1));
		s = s + a;
		
	}
	return (s);
}