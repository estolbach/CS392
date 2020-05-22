#include "list.h"
/*Removes the given node from the list. Returns elem and frees the
node from memory.
DOES NOT PARSE.
*/
void *remove_node(struct s_node **node)
{
    if(node == NULL || *node == NULL){
    	return NULL;
    }
    struct s_node *curr = (*node);
    if(curr->prev == NULL && curr->next != NULL)
    {
        (curr->next)->prev = NULL;
    }
    else if (curr->prev != NULL && curr->next != NULL)
    {
        (curr->next)->prev = curr->prev;
        (curr->prev)->next = curr->next;
    }
    else if (curr->prev != NULL && curr->next == NULL)
    {
        return remove_last(node);
    }
    else if(curr->prev == NULL && curr->next == NULL)
    {
 
        return remove_last(node);
    }
    void *elem = curr->elem;
    (*node) = curr->next;
    curr->next = NULL;
    free(curr);
    curr = NULL;
    return elem;
}

