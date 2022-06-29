#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * cech_cycle - function in c
 * @list: head of singly linked list
 * Return: 0 
 */
int check_cycle(listint_t *list)
{
	listint_t *tmp;


	if (!list)
		return (0);
	while (list)
	{
		tmp = list;
		list = list->next;
		if (tmp <= list)
			return (1);
	}
	return (0)
}
