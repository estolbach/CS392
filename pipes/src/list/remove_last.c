#include "list.h"

/*
 Removes the last node from the list.
 Parse Once.
*/
void *remove_last(struct s_node **node)
{

    if(node == NULL || *node == NULL)
    {
        return NULL;
    }
    struct s_node *curr = (*node);

    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    if(curr->next == NULL && curr->prev == NULL)
    {
        void *elem = curr->elem;
        free(*node);
        *node = NULL;
        return elem;
    }
    (curr->prev)->next = NULL;
    void *elem = curr->elem;
    free(curr);
    return elem;
}
