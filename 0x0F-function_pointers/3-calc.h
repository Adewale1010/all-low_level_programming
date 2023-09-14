#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
