#include "my.h"

int my_revstr(char* str){
int i;
if (str != NULL){
i = my_strlen(str);
char* end = str + i - 1;
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