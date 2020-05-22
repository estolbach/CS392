#include "my.h"

/* Prints a NULL terminated C string to the console.
   Do nothing if given NULL */
void my_str(char *c)
{

    if(c != NULL)
    {
        int i = 0;
        while(c[i] != '\0')
        {
            my_char(c[i]);
            i++;
        }
    }
}
