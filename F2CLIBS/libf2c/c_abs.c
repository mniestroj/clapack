#include "f2c.h"
#ifdef __cplusplus
extern "C" {
#endif

#ifdef KR_headers
extern float f__cabsf();

float c_abs(z) complex *z;
#else
extern float f__cabsf(float, float);

float c_abs(complex *z)
#endif
{
return( f__cabsf( z->r, z->i ) );
}
#ifdef __cplusplus
}
#endif
