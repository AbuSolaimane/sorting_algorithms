#include "sort.h"
/**
 * insertion_sort_list - a function
 *
 * @list: param
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *myNode = NULL, *temporary = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	myNode = *list;
	myNode = myNode->next;
	while (myNode)
	{
		while (myNode->prev && myNode->n < (myNode->prev)->n)
		{
			temporary = myNode;
			if (myNode->next)
				(myNode->next)->prev = temporary->prev;
			(myNode->prev)->next = temporary->next;
			myNode = myNode->prev;
			temporary->prev = myNode->prev;
			temporary->next = myNode;
			if (myNode->prev)
				(myNode->prev)->next = temporary;
			myNode->prev = temporary;
			if (temporary->prev == NULL)
				*list = temporary;
			print_list(*list);
			myNode = myNode->prev;
		}
		myNode = myNode->next;
	}

}
