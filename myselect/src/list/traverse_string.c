#include "list.h"

/*
 Prints all the elems as strings separated by a space
*/
void traverse_string(struct s_node* head){
if(head == NULL){
return;
}
while(head != NULL){
my_str(((char*) head-> elem));
head = head->next;
if(head != NULL){
my_str(" ");
}
}
return;
}
