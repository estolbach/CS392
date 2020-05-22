#include "my.h"

/* Reverse the string, directly in the actual string, without creating a new string. Return the length of the string. */
int my_revstr(char* str){
	int i;
	if (str != NULL){
		// int j = my_strlen(str)-1;
		// for(int i=0; i<j;i++){		
		// 	char k = str[i];
		// 	str[i] = str[j];
		// 	str[j] = k;
		// 	j--;
		// }
		i = my_strlen(str);
		char* end =  str + i - 1;
		while(str < end){
			*str ^= *end;
			*end ^= *str;
			*str ^= *end;
			str++;
			end--;
		}
	}
	return i;
}