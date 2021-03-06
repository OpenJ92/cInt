// Plan bigInt implementation with the following features
//
//
//	- isinstance of Num. (+) etc...
//	- do we need to keep track of bigInt 
//	  structs to destroy?
//	- Do we need a sense of LT EQ GT? Maybe for div impl.
//	- twos complement for implementation.

// last bit in the coef should be the size.
#include <stdlib.h>
#include <string.h>

typedef struct bigInt
{
	int size; // What is the measure? Block or Index?
	int* coef; // 8 bytes
                             //bits
	// -- = block_num*(8*sizeof(int)) - 1
	// pow order -- [(sign), n .. 0]
	//                           sign bit
	// | -- | -- | -- | -- | 
	// | 00 | 1- | 
}  bigInt;

// Num methods

bigInt* int_init(void); 
void int_destroy(bigInt** a);

void int_resize(bigInt* a); // policy of doubling.

bigInt* fromInteger(int element);
bigInt* fromString(const char* element, const int base);

bigInt* int_add(const bigInt* a, const bigInt* b);
bigInt* int_mul(const bigInt* a, const bigInt* b);
bigInt* int_sub(const bigInt* a, const bigInt* b);
bigInt* int_div(const bigInt* a, const bigInt* b);
bigInt* int_mod(const bigInt* a, const bigInt* b);

bigInt* int_abs(const bigInt* a);
bigInt* int_negate(const bigInt* a);

bigInt* int_signum(const bigInt* a);

// Ord methods

