#if (_M_IX86_FP >= 2) || defined(__SSE2__)
#include "SSE2/faster_corner_9.cxx"
#else
#include "noarch/slower_corner_9.cxx"
#endif
