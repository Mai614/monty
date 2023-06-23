#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/

void free_stack(stack_t *head)
{

stack_t *asd;
asd = head;

while (head)
{

asd = head->next;
free(head);
head = asd;

}
}
