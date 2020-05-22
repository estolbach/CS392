#include "list.h"

/*
 Returns a pointer to the node at index n or the last node.
 Parse once
*/
struct s_node *node_at(struct s_node *head, int n)
{

    if(head == NULL)
    {
        return NULL;
    }
    int i = 0;
    while(i < n)
    {
        if(head->next == NULL)
        {
            return head;
        }
        head = head->next;
        i++;
    }
    return head;
}
