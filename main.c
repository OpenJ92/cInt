#include "src/bigInt.h"

int main()
{
	const int ex = 10;
	bigInt* val = fromInteger(ex);
	int_destroy(&val);
	return 0;
}
