#include "list.h"

/*
 Adds a node to the end of a list. DO NOT add a NULL pointer or
 a node with a NULL elem.
 Parse once
*/
void append(struct s_node *node, struct s_node** head)
{
    if(node == NULL || node->elem == NULL)
    {
        return;
    }

    if(head == NULL || (*head) == NULL) {
    	add_node(node, head);
      return;
    }
   struct s_node *curr = *head;
   while(curr-> next != NULL){
   	curr = curr->next;
   }
   curr->next = node;
   node-> prev = curr;
   return;
}
