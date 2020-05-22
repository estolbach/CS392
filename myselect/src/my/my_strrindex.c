#include "my.h"
/* returns the LAST index at which the char is found in the string or -1 if there is none. NULL should return -1 on all chars. */
int my_strrindex(char* str, char c)
{
    if(str == NULL)
    {
        return -1;
    }
    int a = my_strlen(str);
    int b = -1;
    for(int i = 0; i < a; i++)
    {
        if(c == str[i])
        {
            b = i;
        }
    }
    return b;
}
