#include <stdio.h>	

#include <math.h>	

#include <stdlib.h> 
double func(double x, double y)
{

	double f;

	f = (((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + x * x - x));

	return(f);
}