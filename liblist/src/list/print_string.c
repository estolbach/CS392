#include "list.h"

/*
 Prints the elem of node as a in
*/
void print_string(struct s_node* node){
if(node != NULL){
my_str(((char*) node->elem));
}
return;
}
