
#include "uut.h"
#include "funclib.h"
#include "error_handling.h"

uint32_t do_sth(uint8_t p1, uint32_t p2)
{
	uint32_t result = 0;

	if (100 >= p1)
	{
		switch (p1)
		{
		case 0:
			result = f1(p2);
			break;
		case 1:
			result = f2(p2);
			break;
		default :
			SW_ERROR(1);
		}
	}
	else
	{
		p1 -= 100;
		result = p2 - p1 * p1;
	}
	set_value(result);

	return result;
}

