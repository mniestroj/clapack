#include "f2c.h"

#ifdef KR_headers
extern float logf(), f__cabsf(), atan2f();
VOID c_log(r, z) complex *r, *z;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif
extern float f__cabsf(float, float);

void c_log(complex *r, complex *z)
#endif
{
	float zi, zr;
	r->i = atan2f(zi = z->i, zr = z->r);
	r->r = logf( f__cabsf(zr, zi) );
	}
#ifdef __cplusplus
}
#endif
