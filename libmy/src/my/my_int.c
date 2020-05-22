#include "my.h"

/* prints an integer to the consle. Do NOT write recursively. Do NOT use arrays. Must accept negatives. Can be written in <= 10 lines */
void my_int(int i){
	if (i < 0){
		char minus = '-';
		my_char(minus); // print negative sign
		int temp = -i/10, j = 1;
		while (temp != 0){
			temp /= 10;
			j *= 10;
		}
		while (j != 0) {
			int temp2 = -(i/j) + 48;
			char c = (char) temp2;
			my_char(c);
			i = i - ((i/j)*j);
			j /= 10;
		}
	} else {
		int temp = i/10, j = 1;
		while (temp != 0){
			temp /= 10;
			j *= 10;
		}
		do {
			int temp2 = (i/j) + 48;
			char c = (char) temp2;
			my_char(c);
			i = i - ((i/j)*j);
			j /= 10;
		} while (j != 0);
	}
}