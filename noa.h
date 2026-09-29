#ifndef NOAH
#define NOAH
#ifdef __cplusplus
extern "C"{
#endif

void tick(int* counter, const NBytecode* bytecode);

NBytecode compile(const char[]* script);

typedef struct NBytecode NBytecode;

typedef struct NVM NVM;

#ifdef __cplusplus
}
#endif
#endif