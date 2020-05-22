#include "list.h"

/*
 Creates a new node with elem and adds it to head. DO NOT add a NULL
 elem.
 DOES NOT PARSE
*/
void add_elem(void *elem, struct s_node **head)
{
   
    if(elem == NULL)
    {
        return;
    }
    //struct s_node* node = new_node(elem, NULL, *(head));
    struct s_node *node = new_node(elem, NULL, NULL);
    add_node(node, head);
    return;
}
