#ifndef STACK_OPERATIONS_H
#define STACK_OPERATIONS_H

#define STACK_SIZE 100

typedef struct {
	int data[STACK_SIZE];
	int top;
} Stack;

void push(Stack *stack, int value);
void pop(Stack *stack, int line_number);
void swap(Stack *stack, int line_number);
void add(Stack *stack, int line_number);
void nop();
void pint(Stack *stack, int line_number);
void pall(Stack *stack);

#endif
