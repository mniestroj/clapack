#include "f2c.h"

#ifdef KR_headers
extern float sqrtf(), f__cabsf();

VOID c_sqrt(r, z) complex *r, *z;
#else
#undef abs
#include "math.h"
#ifdef __cplusplus
extern "C" {
#endif
extern float f__cabsf(float, float);

void c_sqrt(complex *r, complex *z)
#endif
{
	float mag, t;
	float zi = z->i, zr = z->r;

	if( (mag = f__cabsf(zr, zi)) == 0.f)
		r->r = r->i = 0.f;
	else if(zr > 0)
		{
		r->r = t = sqrtf(0.5f * (mag + zr) );
		t = zi / t;
		r->i = 0.5f * t;
		}
	else
		{
		t = sqrt(0.5f * (mag - zr) );
		if(zi < 0)
			t = -t;
		r->i = t;
		t = zi / t;
		r->r = 0.5f * t;
		}
	}
#ifdef __cplusplus
}
#endif
