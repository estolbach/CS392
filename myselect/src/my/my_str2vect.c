#include "my.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// Takes a string
// Allocates a new vector (array of string ended by a NULL),
// Splits apart the input string x at each space character
// Returns the newly allocated array of strings
// Any number of ' ','\t', and '\n's can separate words.
// I.e. "hello \t\t\n class,\nhow are you?" -> {"hello", "class,", "how", "are","you?", NULL}
char** my_str2vect(char* x){

int i = 0;
int words = 0;
int k = 0;
int n = 0;
char* temp = NULL;
int totalCount = 0;

while('\0' != x[i]){
    if((' ' == x[i] || '\t' == x[i] || '\n' == x[i] || '\0' == x[i+1]) && i == 0){
        while  (' ' == x[i] || '\t' == x[i] || '\n' == x[i]){
            i++;
        }
    }
    else if((' ' == x[i] || '\t' == x[i] || '\n' == x[i] || '\0' == x[i+1])){
        while  (' ' == x[i] || '\t' == x[i] || '\n' == x[i]){
            i++;
        }
        words++;
    }
    i++;
}
char** vect = (char**) malloc((words)*(sizeof(char*))+1);

while(x[k]){
     while(' ' == x[k] || '\t' == x[k] || '\n' == x[k]){
         k++;
     }
     if(x[k]){
         temp = &(x[k]);
         for(totalCount = 0; ' ' != x[k] && '\t' != x[k] && '\n' != x[k] && x[k]; k++){
             totalCount++;
         }
         vect[n] = malloc((totalCount*sizeof(char))+1);
         my_strncpy(vect[n], temp, totalCount);
         vect[n][totalCount] = '\0';
         n++;

     }
}
    vect[n] = NULL;
    return vect;
}
