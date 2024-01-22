#include <stdio.h>
#include <stdlib.h>
#include "stack_operatios.h"

void push(Stack *stack, int value)
{
	if (stack->top == STACK_SIZE - 1)
	{
		fprintf(stderr, "Stack overflow: push operation failed.\n");
		exit(EXIT_FAILURE);
	}

	stack->data[++stack->top] = value;
}

void pop(Stack *stack, int line_number)
{
	if (stack->top == -1)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack->top--;
}

void swap(Stack *stack, int line_number)
{
	if (stack->top < 1)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int temp = stack->data[stack->top];
	stack->data[stack->top] = stack->data[stack->top - 1];
	stack->data[stack->top - 1] = temp;
}

void add(Stack *stack, int line_number)
{
	if (stack->top < 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack->data[stack->top - 1] += stack->data[stack->top];
	pop(stack, line_number);
}

void nop()
{
}

void pint(Stack *stack, int line_number)
{
	if (stack->top == -1)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", stack->data[stack->top]);
}

void pall(Stack *stack)
{
	int i;

	if (stack->top == -1)
	{
		return;
	}

	for (i = stack->top; i >= 0; i--)
	{
		printf("%d\n", stack->data[i]);
	}
}

