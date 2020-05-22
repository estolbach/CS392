#include "my.h"

/* Allocates new memory
	Copies entire str into that memory
	returns pointer to new string */
char* my_strdup(char *str){
	if(str == NULL){
		return NULL;
	}
	char* p = (char*) malloc(my_strlen(str)+1);
	my_strcpy(p, str);
	return p;
}
