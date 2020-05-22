OBJS= my_char.o my_str.o my_alpha.o my_digits.o my_int.o my_num_base.o my_revstr.o my_strindex.o my_strlen.o my_strrindex.o my_atoi.o my_strcat.o my_strcmp.o my_strconcat.o my_strcpy.o my_strdup.o my_strfind.o my_strncmp.o my_strnconcat.o my_strncpy.o my_strrfind.o my_vect2str.o my_str2vect.o

DOTCS= my_char.c my_str.c my_alpha.c my_digits.c my_int.c my_num_base.c my_revstr.c my_strindex.c my_strlen.c my_strrindex.c my_atoi.c my_strcat.c my_strcmp.c my_strconcat.c my_strcpy.c my_strdup.c my_strfind.c my_strncmp.c my_strnconcat.c my_strncpy.c my_strrfind.c my_vect2str.c my_str2vect.c

CFLAGS=-Wall -Werror --pedantic -I../../include

TSRC= ../../test/test_libmy.c
TFILE= ../../test/test_libmy

LPATH=../../lib
LNAME=libmy.a

TFLAGS= -o $(TFILE) $(CFLAGS) -L$(LPATH) -lmy

all: $(OBJS)
	ar -rc $(LNAME) $(OBJS)
	ranlib $(LNAME)
	mv $(LNAME) $(LPATH)

test:
	gcc $(TSRC) $(TFLAGS) $(LPATH)/$(LNAME)
	./$(TFILE)


clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) exec

re: fclean all
