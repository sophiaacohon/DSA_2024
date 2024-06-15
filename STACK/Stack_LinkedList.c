#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stack_LinkedList.h"


StackLinkedList createStack();

bool sll_isEmpty(StackLinkedList s);

bool sll_stack_push(StackLinkedList *s, int elem);
bool sll_stack_pop(StackLinkedList *s);
int sll_stack_peek(StackLinkedList s);

void sll_display(StackLinkedList s);
void sll_visualize(StackLinkedList s);
void sll_stack_evenNumber(StackLinkedList *s);
