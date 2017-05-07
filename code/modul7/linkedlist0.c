// demo of very basic linked list
/* the empty linked list is represent by NULL
 * or some other sentinel value */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;  /* data of this link */
    struct node* next;  /* next link; EMPTY_LIST if there is none */
}
node;

int main() {
    typedef struct node node;
    node* head;
    head = malloc(sizeof(node));
    head->data = 25;
    //head->next = NULL;

    head->next = malloc(sizeof(node));
    head->next->data = 99;
    head->next->next = NULL;

    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}
