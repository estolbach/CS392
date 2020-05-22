#include "list.h"
/*
 Returns a pointer to the elem at index n or the last node.
 Parse once.
*/
void *elem_at(struct s_node *head, int n)
{
    if(head == NULL){
    	return NULL;
    }
    int i = 0;
    while(i < n)
    {
        if(head->next == NULL)
        {
            return head->elem;
        }
        head = head->next;
        i++;
    }
    return head->elem;
}
