#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <math.h>

double sin_degree(double degree) {
	double radian=degree*M_PI/180.0;
	return sin(radian);

}

double cos_degree(double degree) {
	double radian=degree*M_PI/180.0;
	return cos(radian);
}