#include "f2c.h"

#ifdef KR_headers
extern float sinf(), cosf(), sinhf(), coshf();

VOID c_sin(r, z) complex *r, *z;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif

void c_sin(complex *r, complex *z)
#endif
{
	float zi = z->i, zr = z->r;
	r->r = sinf(zr) * coshf(zi);
	r->i = cosf(zr) * sinhf(zi);
	}
#ifdef __cplusplus
}
#endif
