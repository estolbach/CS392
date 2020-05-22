#include "my.h"
/* print an ACSII character to the consle */
void my_char(char c){
	/* write the contents of c to standard out, which is file descriptor 1*/
	write(1, &c, 1);
}