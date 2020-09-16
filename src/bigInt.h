// Plan bigInt implementation with the following features
//
//
//	- isinstance of Num. (+) etc...
//	- do we need to keep track of INT 
//	  structs to destroy?

typedef struct INT
{
	char* coef;
} INT;

void int_init(void);
void int_destroy(INT* a);

INT* fromInteger(const int element);
INT* fromString(const char* element, const int base);

INT* int_add(const INT* a, const INT* b);
INT* int_mul(const INT* a, const INT* b);

INT* int_abs(const INT* a);
INT* int_negate(const INT* a);

INT* int_signum(const INT* a);
