#include "my.h"
/* calculates the length of a string (not including the null terminator). Length of NULL is -1. */
int my_strlen(char* str){
	if(str==NULL){
		return -1;
	}
	int j=0;
	while(str[j]!='\0') {
		j++;
	} 
	return j;
}