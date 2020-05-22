#include "my.h"

/* Retruns a pointer to the first char in the string which matches.
	return NULL if the letter is not found. */
char* my_strfind(char* s, char c){
	int i = my_strindex(s, c);
	char* p;
	if (i < 0){
		return NULL;
	}

	p = &s[i];
	return p;
}
