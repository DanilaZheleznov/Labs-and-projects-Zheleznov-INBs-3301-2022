#include <math.h>

extern "C" float fun_el(int k, float x)
{
	float f;
	f = pow(x, -(1.0 / k)) / sin(x);
	return f;
}
