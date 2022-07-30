#ifndef __SRC__
#define __SRC__

#include <stdio.h>
#include <stdlib.h>

#ifndef __COMPILE__
#define __COMPILE__

#include "compile.c"

#endif // __COMPILE__

#ifndef __VM__
#define __VM__

#include "vm.c"

#endif // __VM__

#endif // __SRC__