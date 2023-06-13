#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }

    return (new);
}
/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
/**
 * is_palindrome- check the funchion of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * Return: 1if it is true
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
