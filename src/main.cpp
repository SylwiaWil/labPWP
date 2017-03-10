#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
	#include<trygonometria.h>
#else
	#define _USE_MATH_DEFINES
	#include<math.h>
#endif

 int main()
 {
	 double result; 
	#ifdef USE_TRIGONOMETRY_DEGREE
		result = cos_degree(45.0);
	#else
		result = cos(pi/4.0);
	#endif

	double sin_degree(10); 

return 0;
 }
