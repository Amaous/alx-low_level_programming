# include "lists.h"
/**
 *free_list - frees lest
 *@head: header of the node
 *
 *Return: the address of the new element, or NULL if it failed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
