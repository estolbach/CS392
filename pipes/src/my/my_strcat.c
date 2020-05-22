#include "my.h"

/* Copies src into the end of dst and returns dst
	Does not allocate memory
	Assumes there is enough memory allocated in dst to hold both strings
	Overwrites dst's original '\0' and places a new '\0' onto the end */
char* my_strcat(char* dst, char* src){
	int end = my_strlen(dst);
	int end2 = my_strlen(src);
	int i = end,j = 0;
	if(!(src == NULL || dst == NULL)){
		while(i < end+end2 && j < end2){
			dst[i] = src[j];
			i++, j++;
		}
		dst[i] = '\0';
	}
	return dst;
}