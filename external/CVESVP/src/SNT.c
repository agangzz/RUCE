#include "SNT.h"
#include <RUtil2.h>

#if 0
#include "_SNT.rc"
#endif

#ifdef __CSVP_Install
#define _RTAddress "CVESVP/_SNT.rc"
#else
#define _RTAddress "_SNT.rc"
#endif

#define _ClassName _
#define _Attr 1

#define _T1 Float
#include <RUtil2/Core/RTemplate.h>

#define _T1 Double
#include <RUtil2/Core/RTemplate.h>

