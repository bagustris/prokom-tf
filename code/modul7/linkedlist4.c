#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
} node;

node* head = NULL;

void prepend(int i)
{
    // build new node
    node* new = malloc(sizeof(node));

    if (new == NULL)
    {
        exit(1);
    }
    // initialize new node
    new->n = i;

    // add new node to head of list
    new->next = head;
    head = new;
}

int main(int argc, char* argv[])
{
    // creating list
    printf("Prepending ints 0-%i onto the list... \n", SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        prepend(i);
    }
    printf("done!\n");

    // printing out list
    printf("Your list contains ");
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");

    return 0;
}
