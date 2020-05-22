#include "list.h"

/*
 Prints all the elems as ints separated by a space
*/
void traverse_int(struct s_node *head)
{
    if(head == NULL)
    {
    	return;
    }
    while(head != NULL)
    {
        my_int(*((int *) head-> elem));
        head = head->next;
        if(head != NULL)
        {
            my_str(" ");
        }
    }
    return;
}
