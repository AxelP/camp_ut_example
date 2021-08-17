
#include <stdint.h>

#define LOG_CALL(...)
#define LOG_PARAM_U32(...)

uint32_t f1_result = 0;
uint32_t f2_result = 0;

uint32_t f1_set(uint32_t p)
{
	f1_result = p;
}

uint32_t f1(uint32_t p)
{
	LOG_CALL("f1");
	LOG_PARAM_U32(p);

	return f1_result;
}

int32_t f2_set(uint32_t p)
{
	f2_result = p;
}

uint32_t f2(uint32_t p)
{
	LOG_CALL("f2");
	LOG_PARAM_U32(p);

	return f2_result;
}

void set_value(uint32_t p)
{
	LOG_CALL("set_value");
	LOG_PARAM_U32(p);
}

void error(uint32_t nr)
{
	throw nr + 100;
}
