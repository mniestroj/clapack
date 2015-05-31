#include "f2c.h"
#ifdef __cplusplus
extern "C" {
#endif

#ifdef KR_headers
VOID pow_ci(p, a, b) 	/* p = a**b  */
 complex *p, *a; integer *b;
#else
extern void c_div(complex*, complex*, complex*);
void pow_ci(complex *p, complex *a, integer *b) 	/* p = a**b  */
#endif
{
	integer n;
	unsigned long u;
	float t;
	complex q, x;
	static complex one = {1.0f, 0.0f};

	n = *b;
	q.r = 1;
	q.i = 0;

	if(n == 0)
		goto done;
	if(n < 0)
		{
		n = -n;
		c_div(&x, &one, a);
		}
	else
		{
		x.r = a->r;
		x.i = a->i;
		}

	for(u = n; ; )
		{
		if(u & 01)
			{
			t = q.r * x.r - q.i * x.i;
			q.i = q.r * x.i + q.i * x.r;
			q.r = t;
			}
		if(u >>= 1)
			{
			t = x.r * x.r - x.i * x.i;
			x.i = 2 * x.r * x.i;
			x.r = t;
			}
		else
			break;
		}
 done:
	p->i = q.i;
	p->r = q.r;
	}
#ifdef __cplusplus
}
#endif
