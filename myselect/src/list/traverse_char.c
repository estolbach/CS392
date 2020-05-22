#include "list.h"

/*
 Prints all the elems as chars separated by a space
*/
void traverse_char(struct s_node* head){
if(head == NULL){
return;
}
while(head != NULL){
my_char(*((char*) head-> elem));
head = head->next;
if(head != NULL){
my_str(" ");
}
}
return;
}
