#include "list.h"

/*
 Prints all the elems as strings separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL)
*/
void debug_string(struct s_node *head)
{
    if(head == NULL)
    {
        return;
    }
    while(head != NULL)
    {
        my_str("(");
        if(head->prev == NULL)
        {
            my_str("NULL");
        }
        else
        {
            my_str(((char *)head->prev->elem));
        }

        my_str(" <- ");
        my_str(((char *) head-> elem));
        my_str(" -> ");
        if(head->next == NULL)
        {
            my_str("NULL");
        }
        else
        {
            my_str(((char *)head->next->elem));
        }
        my_str(")");
        head = head->next;
        if(head != NULL)
        {
            my_str(", ");
        }
    }
    return;
}
