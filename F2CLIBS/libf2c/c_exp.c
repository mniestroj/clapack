#include "f2c.h"

#ifdef KR_headers
extern float expf(), cosf(), sinf();

 VOID c_exp(r, z) complex *r, *z;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif

void c_exp(complex *r, complex *z)
#endif
{
	float expx, zi = z->i;

	expx = expf(z->r);
	r->r = expx * cosf(zi);
	r->i = expx * sinf(zi);
	}
#ifdef __cplusplus
}
#endif
