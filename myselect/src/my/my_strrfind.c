#include "my.h"

/* Returns a pointer to the last char in the string which matches.
	return NULL if the letter is not found. */
char* my_strrfind(char* s, char c){
	int i = my_strrindex(s, c);
	char* p;
	if (i < 0){
		return NULL;
	}

	p = &s[i];
	return p;
}
