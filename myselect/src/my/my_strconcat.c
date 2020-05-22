#include "my.h"

/* Allocates new memory
Copies concatenated strings in that new memory
Should result in one valid C string
Returns pointer to it
If both NULL return NULL
Ignore NULL strings when concatenating */
char* my_strconcat(char *a, char *b){
if(a == NULL && b == NULL){
return NULL;
}
if(a == NULL){
return my_strdup(b);
}
if(b == NULL){
return my_strdup(a);
}
char* p = (char *) malloc(my_strlen(a) + my_strlen(b) + 1);
my_strcpy(p,a);
my_strcat(p,b);
return p;
}
