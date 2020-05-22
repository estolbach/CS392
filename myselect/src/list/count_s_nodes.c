#include "list.h"

/*
 Returns the value the length of the list
 Parse Once.
*/
int count_s_nodes(struct s_node* head){
	if(head == NULL) {
		return 0;
	}
	int counter = 1;
	while(head->next != NULL) {
		head = head -> next;
		counter++;
	}
	return counter;
}
