#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/

void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *l;
(void)counter;

l = *head;
while (l)
{
if (l->n > 127 || l->n <= 0)
{
break;
}
printf("%c", l->n);
l = l->next;
}
printf("\n");
}
