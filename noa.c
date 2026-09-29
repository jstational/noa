#include "noa.h"

void tick(int* counter, const NBytecode* bytecode, NVM* vm) {}

NBytecode compile(const char[]* script) {}

typedef struct NBytecode {
    int[] intcode;
} NBytecode;

typedef struct NVM {} NVM;

int
vdef_=2,
fdef_=0,
cdef_=1,

set_=4,
return_=5,

const_=6,
ptr_=7;