#include "bigInt.h"

void int_destroy(bigInt** element)
{
	free(*element);
	free((*element)->coef);
	memset(*element, 0, sizeof(bigInt));
}

bigInt* int_init(void)
{
	bigInt* retval; int* coef;
	if ((retval = (bigInt*)malloc(sizeof(bigInt))) == NULL)
	{
		return NULL;
	}

	if ((coef = (int*)malloc(sizeof(int))) == NULL)
	{
		free(retval);
		return NULL;
	}

	retval->size = 8*sizeof(int);
	retval->coef = coef; 
	return retval;
}

// Dynamic Allocation from return. Both coef and retval.
bigInt* fromInteger(int element)
{
	bigInt* retval;
	if ((retval = int_init()) == NULL) 
	{
		return NULL;
	}

	*retval->coef = element;
	return retval;
}

// bigInt* fromString(const char* element, const int base)
// {
// 	const char* tmp = element;
// 	while (*tmp != '\0')
// 	{
// 	}
// }
