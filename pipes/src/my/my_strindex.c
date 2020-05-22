#include "my.h"
/* returns the FIRST index at which the char is found in the string or -1 if there is none. NULL should return -1 on all chars. */
int my_strindex(char *str, char c)
{
    if(str == NULL)
    {
        return -1;
    }
    int a = my_strlen(str);
    for(int i = 0; i < a; i++)
    {
        if(c == str[i])
        {
            return i;
        }
    }
    return -1;
}