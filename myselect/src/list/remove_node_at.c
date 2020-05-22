#include "list.h"

/*
 Removes the node at index n or the last node.
 Parse once
*/
void *remove_node_at(struct s_node **head, int n)
{

    if(head == NULL || *head == NULL)
    {
        return NULL;
    }
    struct s_node *curr = (*head);
    int counter = 0;
    if(n <= 0)
    {

        return remove_node(head);

    }
    while(n > counter && curr-> next != NULL)
    {
        curr = curr->next;
        counter++;
    }
    if(curr->next == NULL && n > counter )
    {
        void *elem = (*head)->elem;
        remove_last(head);
        return elem;
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    void *elem = curr->elem;
    free(curr);
    curr = NULL;
    return elem;
}
