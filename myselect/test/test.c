#include "my.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
    char t[] = "a-b54sc7-d";
    char *x = (char *)malloc(3);
    strcpy(x, t);
    printf("%s result: a-b54sc7-d\n", x);
}