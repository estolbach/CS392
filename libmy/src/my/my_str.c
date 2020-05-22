#include "my.h"
/* prints a NULL terminated C string to the consle. Do nothing if given NULL */
void my_str(char* str){
	if (str != NULL){
		while (*str != '\0'){
			my_char(*str++);
		}
	}
}