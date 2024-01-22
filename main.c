#include <stdio.h>
#include "stack_operatios.h"

int main(void)
{
	Stack stack = { .top = -1 };

	push(&stack, 10);
	push(&stack, 20);
	pint(&stack, 1);
	swap(&stack, 2);
	pop(&stack, 2);
	add(&stack, 2);
	nop();
	pall(&stack);

	return 0;
}
