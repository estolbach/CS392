#include "my.h"
#include <stdio.h>
#include <string.h>

int main(){
	printf("test my_char-------\n");
	my_char('-');
	printf("\ntest my_str-------\n");
	char s[] = "asdf";
	my_str(s);
	my_str(NULL);
	char z[] = "\0";
	my_str(z);
	printf("\ntest my_num_base-------\n");
	char t[] = "RTFM";
	my_num_base(9, NULL);
	my_char('\n');
	my_num_base(9, t);
	my_char('\n');
	my_num_base(9, s);
	my_char('\n');
	my_num_base(-2147483648, t);
	my_char('\n');
	my_num_base(2147483647, t);
	my_char('\n');
	my_num_base(10, t);
	my_char('\n');
	my_num_base(-10, t);
	my_char('\n');
	my_num_base(4, t);
	my_char('\n');
	char u[] = "A";
	my_num_base(4, u);
	my_char('\n');
	my_num_base(-4, u);
	my_char('\n');
	char v[] = "\0";
	my_num_base(4, v);
	my_char('\n');
	my_num_base(-1, t);
	my_char('\n');
	my_num_base(0, t);
	
	return 0;
}