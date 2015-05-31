#include "f2c.h"
#ifdef __cplusplus
extern "C" {
#endif

#ifdef KR_headers
float r_imag(z) complex *z;
#else
float r_imag(complex *z)
#endif
{
return(z->i);
}
#ifdef __cplusplus
}
#endif
