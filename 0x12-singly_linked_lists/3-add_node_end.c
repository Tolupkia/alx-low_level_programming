#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to the first node of a linked list
 * @str: string to include in the node
 * Return: a pointer to the head of the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL) /* initializing the list with the first node */
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}

/**
 * create_node - creates a new node
 * @str: string to add to the node
 * Return: a pointer to the allocated memory
 */

lis_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * len - calculates the length of a string
 * @str: constant string
 * Return: the length of the string
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
