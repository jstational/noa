#include "noa.h"

void tick(int* counter, const NBytecode* bytecode, NSpace* space) {}

NBytecode compile(const char[]* script) {}

typedef struct NBytecode {
    int[] intcode;
} NBytecode;

typedef struct NSpace {
    NClass[] classes;
    NInterface[] interfaces;
    NMethod[] methods;
    NVar[] vars;
} NSpace;

typedef struct NClass {
    char[] name;
    NClass[] subc;
    NInterface[] subi;
    NMethod[] methods;
    NVar[] vars;
} NClass;

typedef struct NInterface {
    char[] name;
    NMethod[] methods;
} NInterface;

typedef struct NMethod {
    char[] name;
} NMethod;

typedef struct NVar {
    char[] name;
} NVar;