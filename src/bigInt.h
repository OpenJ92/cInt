// Plan bigInt implementation with the following features
//
//
//	- isinstance of Num. (+) etc...

typedef struct INT
{
	char* coef;
} INT;

void int_init(void);
void int_destroy(INT* a);

INT* fromInteger(int element);
INT* fromString(char** element, int base);

INT* add(INT* a, INT* b);
INT* mul(INT* a, INT* b);

INT* abs(INT* a);
INT* negate(INT* a);

INT* signum(INT* a);
