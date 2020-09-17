#include "bigInt.h"

int int_init(bigInt* element)
{
	if ((element->coef = (int*)malloc(sizeof(int))) == NULL)
	{
		return 0;
	}

	element->size = 8*sizeof(int);
	return 1;
}

// Dynamic Allocation from return. Both coef and retval.
const bigInt* fromInteger(int element)
{
	bigInt* retval; 
	if ((retval = (bigInt*)malloc(sizeof(bigInt))) == NULL)
	{
		return NULL;
	}

	if (int_init(retval) == 0) 
	{ 
		return NULL; 
	}

	memset(retval->coef, 0, sizeof(int));
	retval->coef = &element;
	return retval;
}
