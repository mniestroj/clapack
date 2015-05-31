#ifdef KR_headers
extern double sqrt();
double f__cabs(real, imag) double real, imag;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif
double f__cabs(double real, double imag)
#endif
{
double temp;

if(real < 0)
	real = -real;
if(imag < 0)
	imag = -imag;
if(imag > real){
	temp = real;
	real = imag;
	imag = temp;
}
if((real+imag) == real)
	return(real);

temp = imag/real;
temp = real*sqrt(1.0 + temp*temp);  /*overflow!!*/
return(temp);
}
#ifdef __cplusplus
}
#endif

#ifdef KR_headers
extern float sqrtf();
float f__cabsf(real, imag) float real, imag;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif
float f__cabsf(float real, float imag)
#endif
{
float temp;

if(real < 0)
	real = -real;
if(imag < 0)
	imag = -imag;
if(imag > real){
	temp = real;
	real = imag;
	imag = temp;
}
if((real+imag) == real)
	return(real);

temp = imag/real;
temp = real*sqrtf(1.0 + temp*temp);  /*overflow!!*/
return(temp);
}
#ifdef __cplusplus
}
#endif
