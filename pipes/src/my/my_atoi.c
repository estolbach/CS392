#include "my.h"


/*  Returns the int represented by the ascii string
 Handles negatives.
 Ignores preceding characters and trailing numbers and chars */
int my_atoi(char* n){
if (n == NULL){
return 0;
}
int iter = 0, dig = 1, num = 0, neg = 0, seen = 0, begin = 0, end = 0;
while(n[iter] != '\0'){
if(n[iter] != '-' && (n[iter] < 48 || n[iter] > 57)){
if(seen == 0){
iter++;
continue;
} else {
break;
}
}
if(n[iter] == '-'){
if(seen == 0){
neg++, iter++;
continue;
} else {
break;
}
}
if(n[iter] >= 48 && n[iter] <= 57){
if (seen == 0){
begin = iter;
}
iter++;
dig *= 10;
seen = 1;
}
}
end = iter, dig /= 10, iter = begin;
while(iter != end && dig != 0){
num += (n[iter]-48)*dig;
dig /= 10, iter++;
}
if(neg%2==1){
num *= -1;
}
return num;
}