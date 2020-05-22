#include "list.h"

/*
 Inserts a node at the start of the list. DO NOT add a NULL pointer or
 a node with a NULL elem.
 DOES NOT PARSE
*/

void add_node(struct s_node* node, struct s_node** head){
	if(node == NULL || node->elem == NULL){
		return;
	}

	if(head == NULL || (*head) == NULL) {
		(*head) = node;
		return;
	}

	(*head)->prev = node;
	node->next = *head;
	*head = node;

}
