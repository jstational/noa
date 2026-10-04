#ifndef NOAH
#define NOAH
#ifdef __cplusplus
extern "C"{
#endif

void tick(int* counter, const NBytecode* bytecode, NSpace space);

NBytecode compile(const char[]* script);

typedef struct NByteCode NBytecode;

typedef struct NSpace NSpace;

typedef struct NClass NClass;

typedef struct NInterface NInterface;

typedef struct NMethod NMethod;

typedef struct NVar NVar;

#ifdef __cplusplus
}
#endif
#endif