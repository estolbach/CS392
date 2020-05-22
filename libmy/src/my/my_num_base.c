#include "my.h"
/* prints a number using the length of the string as the base and the contents as the alphabet. 
	ex. my_num_base(9, "RTFM") R=0, T=1, F=2, M=3. 9 in base 4 is 21, so result is "FT"
	If char* is NULL or empty, print an error message and return
	if given unary, repeat alphabet letter the specified number of times
	for negative print a "-" then the number */
void my_num_base(int i, char* str){
	if(str==NULL || str[0]=='\0'){
		char s[] = "ERROR: PLEASE ENTER PROPER ALPHABET!";
		my_str(s);
		return;
	}
	if(str[1]=='\0'){
		if (i <0){
			char minus = '-';
			my_char(minus); // print negative sign
			while(i != 0){
				my_char(str[0]);
				i++;
			}
		} else {
			while(i!=0){
				my_char(str[0]);
				i--;
			}
		}
		return;
	}
	if (i < 0){
		char minus = '-';
		my_char(minus); // print negative sign
		int l2 = my_strlen(str), temp3 = -i/l2, j2 = 1;
		while (temp3 != 0){
			temp3 /= l2;
			j2 *= l2;
		}
		while (j2 != 0) {
			int temp4 = -(i/j2);
			char d = str[temp4];
			my_char(d);
			i = i - ((i/j2)*j2);
			j2 /= l2;
		}
	} else {
		int l = my_strlen(str),temp = i/l, j = 1;
		while (temp != 0){
			temp /= l;
			j *= l;
		}
		do {
			int temp2 = (i/j);
			char c = str[temp2];
			my_char(c);
			i = i - ((i/j)*j);
			j /= l;
		} while (j != 0);
	}
}
