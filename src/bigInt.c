#include "bigInt.h"

// Dynamic Allocation from return. Both coef and retval.
const bigInt* fromInteger(const int element)
{
	bigInt* retval; int* coef;

	if ((retval = (bigInt*)malloc(sizeof(bigInt))) == NULL)
	{
		return NULL;
	}

	if ((coef = (int*)malloc(sizeof(int))) == NULL)
	{
		return NULL;
	}

	retval->size = 8*sizeof(int);

	memset(coef, 0, sizeof(int));
	*coef = element;
	retval->coef = coef;

	return retval;
}
