# include "lists.h"
/**
*add_node_end - inserts a node at the end of the list
*@head: headerofthe node
*@str: store string
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp;
list_t *newnode;

unsigned int i, count = 0;

if (head == NULL)
return (NULL);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
count++;
newnode->len = count;
newnode->next = NULL;
tmp = *head;
if (tmp == NULL)
*head = newnode;
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = newnode;
}
return (*head);
}
