#include "list.h"

/*
 Adds a node at index n of a list or at the end of the list if n is
 too large.
 Parse once
*/
void add_node_at(struct s_node *node, struct s_node **head, int n)
{
    

    struct s_node *curr = (*head);
    int counter = 0;
    if(n<=0 || head == NULL || (*head) == NULL || node == NULL || node->elem == NULL){
        add_node(node,head);
        return;
    }
    while(n > counter && curr-> next != NULL)
    {
        curr = curr->next;
        counter++;
    }
    if(curr->next == NULL && n > counter ){   
        append(node, head);
        return;
    }
    node->next = curr;
    node-> prev = curr->prev;
    curr->prev->next = node;
    curr->prev = node;
    return;
}
