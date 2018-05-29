#include<math.h>
#include "func.h"
double x, y, result;
void func(void)
{

	result = (((x - 1)*sqrt(x) - (y - 1)*sqrt(y)) / (sqrt(pow(x, 3)*y) + x * y + x * x - x));

}