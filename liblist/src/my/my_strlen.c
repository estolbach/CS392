#include "my.h"

int my_strlen(char *c)
{
    if(c == NULL)
    {
        return -1;
    }
    int i = 0;
    while(c[i] != '\0')
    {
        i++;;
    }
    return i;
}

