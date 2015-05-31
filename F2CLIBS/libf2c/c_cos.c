#include "f2c.h"

#ifdef KR_headers
extern float sinf(), cosf(), sinhf(), coshf();

VOID c_cos(r, z) complex *r, *z;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif

void c_cos(complex *r, complex *z)
#endif
{
	float zi = z->i, zr = z->r;
	r->r =   cosf(zr) * coshf(zi);
	r->i = - sinf(zr) * sinhf(zi);
	}
#ifdef __cplusplus
}
#endif
