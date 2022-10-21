#include "lists.h"
int len(const char *str);

/**
 * add_node - creates a node and add it to a linked list
 * @head: pointer to head of the linked list
 * @str: string to assigned to the node
 * Return: pointer to the head of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL) /*initializes the next pointer to NULL */
		new_node->next = NULL;
	else /*moves the new node to the head */
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;
	return (*head);
}

/**
 * len - claculate the length of a string
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
