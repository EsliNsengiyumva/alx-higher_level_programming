#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * is_palindrome - prints all elements of a listint_t list
 * @head: pointer to head of list
 * Return: 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
    	int length = 0, i = 0, j;
    	int *values = NULL;
    	/* compute length and allocate array to store values */
    	while (current != NULL)
    	{
		length++;
		current = current->next;
    	}
    	values = (int *)malloc(length * sizeof(int));
    	if (values == NULL)
		return (0);
    	/* fill array with values of nodes in the list */
    	current = *head;
    	for (i = 0; i < length; i++)
    	{
		values[i] = current->n;
		current = current->next;
    	}
    	/* check if the array is a palindrome */
    	for (i = 0, j = length - 1; i <= j; i++, j--)
    	{
		if (values[i] != values[j])
	 	{
	    		free(values);
	    		return (0);
        	}
    	}
    	
	free(values);
	return (1);
}
