struct BigInt {
	int digits_count;
	unsigned int the_int[MAX_DIGITS];
};

int strtobig_int(const char *str, int len, struct BigInt *big_int);

void print_big_int(const struct BigInt *big_int);

void multiply(const struct BigInt *big_int, int factor, struct BigInt *big_result);

void divide(const struct BigInt *big_int, int divisor, struct BigInt *big_result);

void copy_big_int(const struct BigInt *from, struct BigInt *to);
