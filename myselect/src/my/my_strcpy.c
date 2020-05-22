#include "my.h"

/* Copies the characters from src into dst overwriting what's already in there.
	Always copies a '\0'
	Assumes dst has enough memory allocated for the new string if it is longer.
	Does NOT allocate memory */
char* my_strcpy(char *dst, char *src) {
	if(!(src == NULL || dst == NULL)){
		int i = my_strlen(src);
		dst[i] = '\0';
		for(i = i - 1; i >= 0; i--){
			dst[i] = src[i];
		}
	}
	return dst;
}
